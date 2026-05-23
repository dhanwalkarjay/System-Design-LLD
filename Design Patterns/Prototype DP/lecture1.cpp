#include<iostream>
using namespace std;

/*
    It focuses on creating a new object by copying an existing object, rather than creating a new object from scratch. 
    
    This can be useful when the process of creating a new object is expensive or complex or resources takken, and we want to avoid that.

    Then use Prototype design Pattern.
*/

class ScorpioEngine{
    public:
        virtual ~ScorpioEngine() {}
};

class ScorpioNEngine : public ScorpioEngine{
    public:

};

class ScorpioClassicEngine : public ScorpioEngine{
    public:

};

class IScorpioPrototype{
    public:
        virtual IScorpioPrototype* clone() = 0;

        virtual void setEngine(ScorpioEngine* scorpioEngine) = 0;

        virtual void start() = 0;

        virtual ~IScorpioPrototype() {}
};

class Scorpio : public IScorpioPrototype{
    public:
        ScorpioEngine* engine = new ScorpioEngine();

        IScorpioPrototype* clone() override {
            return new Scorpio(*this);
        }

        void setEngine(ScorpioEngine* scorpioEngine) override {
            this->engine = scorpioEngine;
        }

        void start() override {
            cout<<"Scorpio Started"<<endl;
        }
};

int main(){

    IScorpioPrototype* prototype = new Scorpio();
    
    IScorpioPrototype* scorpioN = prototype -> clone();
    scorpioN -> setEngine(new ScorpioNEngine());
    
    IScorpioPrototype* scorpioClassic = prototype -> clone();
    scorpioClassic -> setEngine(new ScorpioClassicEngine());

    scorpioN -> start();
    scorpioClassic -> start();

    delete prototype;
    delete scorpioN;
    delete scorpioClassic;
    
    return 0;
}