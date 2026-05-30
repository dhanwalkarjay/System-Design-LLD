#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    -> This pattern related to the PUB-SUB model.

    -> It defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.

*/

class IObserver{
    public:
        virtual void Procced(string newState) = 0;
};  

class ISubject{
    public:
        virtual void AddObserver(IObserver* observer) = 0;
        virtual void RemoveObserver(IObserver* observer) = 0;
        virtual void NotifyObserver() = 0;
};

class IAirCraft{
    public:
        virtual void fly() = 0;
        virtual void land() = 0;
};

class Boeing : public IAirCraft, public IObserver{
    private:
        string state;
    public:
        ISubject* tower;
        Boeing(ISubject* tower){
            this->tower = tower;
        }
        
        void fly() override{
            state = "Flying";
        }
        void land() override{
            state = "Landed";
            tower->RemoveObserver(this);
        }

        void Procced(string state) override{
            cout << "Boeing is " << state << endl;
        }
};

class ATCTower : public ISubject{
    private:
        vector<IObserver*> observers;
        string state;
    public:
        void AddObserver(IObserver* observer) override{
            cout << "Adding observer" << endl;
            observers.push_back(observer);
        }
        void RemoveObserver(IObserver* observer) override{
            cout << "Removing observer" << endl;
            observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
        }
        void NotifyObserver() override{
            for(auto observer : observers){
                observer->Procced(this->state);
            }
        }

        void ChangeState(string newState){
            state = newState;
            NotifyObserver();
        }
};

int main(){

    ATCTower* tower = new ATCTower();
    Boeing* boeing = new Boeing(tower);

    boeing->fly();

    return 0;
}