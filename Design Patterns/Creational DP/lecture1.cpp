#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
FACTORY METHOD PATTERN => It provides an interface for creating objects in a superclass, but allows     
                          subclasses to alter the type of objects that will be created.
*/

// INTERFACES
class IEngine{
    public:
        virtual void startEngine() = 0;
        virtual ~IEngine() {};
};

class IBodyShell{
    public:
        virtual void buildBodyShell() = 0;
        virtual ~IBodyShell() {};
};

// CONCRETE CLASSES
class ScorpioNEngine : public IEngine{
    public:
        void startEngine()override{
            cout << "Starting ScorpioN Engine" << endl;
        }
};

class ScorpioClassicEngine : public IEngine{
    public:
        void startEngine()override{
            cout << "Starting Scorpio Classic Engine" << endl;
        }
};

class ScorpioNBodyShell : public IBodyShell{
    public:
        void buildBodyShell()override{
            cout << "Building ScorpioN Body Shell" << endl;
        }
};

class ScorpioClassicBodyShell : public IBodyShell{
    public:
        void buildBodyShell()override{
            cout << "Building Scorpio Classic Body Shell" << endl;
        }
};


// ABSTRACT CLASS
class ScorpioEngine : public IEngine{
    public:
        
};

class ScorpioBodyshell : public IBodyShell{
    public:
        
};


// PRODUCT CLASSES
class Scorpio{
    public:
        IEngine* engine;
        IBodyShell* bodyShell;
        void makeScorpio(){
            cout << "Making Scorpio" << endl;
            this -> engine = new ScorpioNEngine();
            this -> bodyShell = new ScorpioNBodyShell();
        }

        virtual void driveCar(){
            makeScorpio();
            cout << "Driving Scorpio parent class" << endl;
        }

        virtual ~Scorpio() {};        
};

class ScorpioN : public Scorpio{
    public:
        void makeScorpio(){
            cout << "Making ScorpioN" << endl;
            this -> engine = new ScorpioNEngine();
            this -> bodyShell = new ScorpioNBodyShell();
        }

        void driveCar()override{
            makeScorpio();
            cout << "Driving ScorpioN" << endl;
        }
};

class ScorpioClassic : public Scorpio{
    public:
        void makeScorpio(){
            cout << "Making Scorpio Classic" << endl;
            this -> engine = new ScorpioClassicEngine();
            this -> bodyShell = new ScorpioClassicBodyShell();
        }

        void driveCar()override{
            makeScorpio();
            cout << "Driving Scorpio Classic" << endl;
        }
};

// Not actual Factory, simple Factory
// class ScorpioFactory{
//     public:
//         Scorpio* createScorpio(char type){
//             switch(type){
//                 case 'N':
//                     return new ScorpioN();
//                 case 'C':
//                     return new ScorpioClassic();
//                 default:
//                     return new Scorpio();
//             }
//         }
// };

int main(){


    list<Scorpio*> scorpioList;

    Scorpio* scorpioN = new ScorpioN();
    Scorpio* scorpioClassic = new ScorpioClassic();

    scorpioList.push_back(scorpioN);
    scorpioList.push_back(scorpioClassic);

    for(Scorpio* scorpio : scorpioList){
        scorpio -> driveCar();
    }

    return 0;
}