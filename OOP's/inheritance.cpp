#include <iostream>
using namespace std;

class Vehicle{
    public:
        string name;
        string model;
        int noOfTyres;

        Vehicle(string _name, string _model, int _noOfTyres){
            cout<<"I'm inside Vehical Constructor"<<endl;
            this->name = _name;
            this->model = _model;
            this->noOfTyres = _noOfTyres;
        }

    public:
        void startEngine(){
            cout<<"Engine is start : "<<name<<" "<<model<<endl;
        }

        void stopEngine(){
            cout<<"Engine is stoped : "<<name<<" "<<model<<endl;
        }
};

class Car : public Vehicle{
    public:
        int noOfDoors;
        string transmissionType;

        Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType):Vehicle(_name, _model, _noOfTyres){
            cout<<"I'm inside Car Constructor"<<endl;
            this->noOfDoors= _noOfDoors;
            this->model = _transmissionType;
        }

    void startAC(){
        cout<<"AC has started of : "<<name<<endl;
    }
};

int main(){

    Car audi("audi", "Q3", 4, 4, "Manual");
    audi.startEngine();
    audi.startAC();
    audi.stopEngine();

    return 0;
}