#include <iostream>
using namespace std;

/*
    -> This is the Decorator Design Pattern. It allows us to add new functionality to an existing object without altering its structure.
    
    -> In this example, we have a base class ICar which defines the interface for our car. We have a concrete class Scorpio which implements the ICar interface. We then have a decorator class ScorpioDecorator which also implements the ICar interface and contains a pointer to an ICar object. Finally, we have a concrete decorator class BulletProof which inherits from ScorpioDecorator and adds new functionality to the getWeight() method.
*/

class ICar{
    public:
        float baseWeight = 1500;
        virtual void start() = 0;
        virtual void stop() = 0;
        virtual float getWeight() = 0;
};

class Scorpio : public ICar{
    public:
        void start(){
            cout<<"Scorpio Started"<<endl;
        }
        void stop(){
            cout<<"Scorpio Stopped"<<endl;
        }
        float getWeight(){
            return baseWeight;
        }
};

class ScorpioDecorator : public ICar{

};

class BulletProof : public ScorpioDecorator{
    ICar* scorpio;
    public:

        BulletProof(ICar* myScorpio){
            this->scorpio = myScorpio;
        }

        void start() override {
            scorpio->start();
        }

        void stop() override {
            scorpio->stop();
        }

        float getWeight() override {
            return scorpio->getWeight() + 300;
        }
    
};

int main(){

    ICar* scorpio = new Scorpio();
    ICar* bulletProofScorpio = new BulletProof(scorpio);
    float totalWeight = bulletProofScorpio->getWeight();
    cout<<"Total Weight of Bullet Proof Scorpio: "<<totalWeight<<endl;

    return 0;
}