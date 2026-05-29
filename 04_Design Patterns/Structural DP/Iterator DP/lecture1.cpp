#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
    Iterator Pattern:
    -> Provides a standard way to traverse a collection without exposing its internal representation.
*/

// Example: Air Force has different types of aircrafts (jets, halis, cargo).
class IAirCraft {
    public:
        virtual ~IAirCraft() = default;
};

// Concrete Aircrafts
class Boing : public IAirCraft {};
class Tejas : public IAirCraft {};
class Chinok : public IAirCraft {};

// Custom Iterator Interface
class ICustomIterator {
    public:
        virtual IAirCraft* next() = 0;
        virtual bool hasNext() = 0;
        virtual ~ICustomIterator() = default;
};

// Concrete Iterator for Air Force
class AirForce;

// The AirForceIterator will traverse through jets, halis, and cargo in a specific order.
class AirForceIterator : public ICustomIterator {
    private:
        vector<IAirCraft*> jets;
        vector<IAirCraft*> halis;
        list<IAirCraft*> cargo;

        size_t jetsPos = 0;
        size_t halisPos = 0;
        list<IAirCraft*>::iterator cargoIt;

    public:
        AirForceIterator(
            const vector<IAirCraft*>& j,
            const vector<IAirCraft*>& h,
            const list<IAirCraft*>& c)
            : jets(j), halis(h), cargo(c)
        {
            cargoIt = cargo.begin();
        }

        bool hasNext() override {
            return jetsPos < jets.size() ||
                halisPos < halis.size() ||
                cargoIt != cargo.end();
        }

        IAirCraft* next() override {
            if (jetsPos < jets.size()) {
                return jets[jetsPos++];
            }

            if (halisPos < halis.size()) {
                return halis[halisPos++];
            }

            if (cargoIt != cargo.end()) {
                IAirCraft* temp = *cargoIt;
                ++cargoIt;
                return temp;
            }

            return nullptr;
        }
};

// Air Force class that contains different types of aircrafts and provides an iterator to traverse them.
class AirForce {
    private:
        vector<IAirCraft*> jets;
        vector<IAirCraft*> halis;
        list<IAirCraft*> cargo;

    public:
        AirForce() {
            jets.push_back(new Tejas());

            halis.push_back(new Chinok());

            cargo.push_back(new Boing());
        }

        ~AirForce() {
            for (auto p : jets) delete p;
            for (auto p : halis) delete p;
            for (auto p : cargo) delete p;
        }

        vector<IAirCraft*> getJets() {
            return jets;
        }

        vector<IAirCraft*> getHalis() {
            return halis;
        }

        list<IAirCraft*> getCargo() {
            return cargo;
        }

        ICustomIterator* createIterator() {
            return new AirForceIterator(jets, halis, cargo);
        }
};


int main() {
    AirForce airForce;

    ICustomIterator* it = airForce.createIterator();

    while (it->hasNext()) {
        IAirCraft* aircraft = it->next();
        cout << "Aircraft visited: " << aircraft << endl;
    }

    delete it;

    return 0;
}