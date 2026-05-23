#include <iostream>
#include <vector>

using namespace std;

/*
ABSTRACT FACTORY PATTERN => It provides an interface for creating families of related 
                            or dependent objects without specifying their concrete classes.
*/

// INTERFACES
class IEngine{
    public:
        virtual void startEngine() = 0;
        virtual ~IEngine() {};
};

// CONCRETE CLASSES
class ScorpioEngine : public IEngine{
    public:
        void startEngine()override{
            cout << "Starting Scorpio Engine" << endl;
        }
};

class DefenderEngine : public IEngine{
    public:
        void startEngine()override{
            cout << "Starting Defender Engine" << endl;
        }
};

// ABSTRACT FACTORY
class IVehicleFactory{
    public:
        virtual IEngine* createEngine() = 0;
        virtual ~IVehicleFactory() {}
};

// CONCRETE FACTORIES
class ScorpioFactory : public IVehicleFactory{
    public:
        IEngine* createEngine(){
            cout << "Creating Scorpio Engine" << endl;
            return new ScorpioEngine();
        }
};

class DefenderFactory : public IVehicleFactory{
    public:
        IEngine* createEngine(){
            cout << "Creating Defender Engine" << endl;
            return new DefenderEngine();
        }
};

// CLIENT
class Car{
    public:
        IEngine* engine;
        IVehicleFactory* carFactory;

        Car(IVehicleFactory* factory){
            carFactory = factory;
        }

        void driveCar(){
            engine = carFactory -> createEngine();
            cout << "Driving Car" << endl;
        }
};

int main(){

    IVehicleFactory* scorpioFactory = new ScorpioFactory();
    IVehicleFactory* defenderFactory = new DefenderFactory();

    vector<Car> cars;

    cars.push_back(Car(scorpioFactory));
    cars.push_back(Car(defenderFactory));

    for(Car c : cars){
        c.driveCar();
    }

    return 0;  
}