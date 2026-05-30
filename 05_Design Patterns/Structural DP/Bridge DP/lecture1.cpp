#include <iostream>
using namespace std;

/*
    -> Bridge Pattern is used to decouple abstraction from its implementation so that the two can vary independently.

    -> Decouple abstraction from implementation.

    -> It also hides implementation details from the client.
*/


// Abstraction
class AbstractScorpioImpl{
    public:
        virtual bool isRightHandDrive() = 0;
        virtual void printSafetyRe1() = 0;
};


// Refined Abstraction
class AbstractScorpio{
    public:
        // Bridge 
        AbstractScorpioImpl* scorpioImpli;
        
        AbstractScorpio(AbstractScorpioImpl* sc){
            this->scorpioImpli = sc;
        }

        // member functions
        virtual bool isRightHandDrive() = 0;
        virtual void printSafetyRe1() = 0;
};


// Concrete Implementor
class ScorpioN : public AbstractScorpio{
    public:
        ScorpioN(AbstractScorpioImpl* scorpioImpl): AbstractScorpio(scorpioImpl){}

        void printSafetyRe1() override {
            scorpioImpli->printSafetyRe1();
        }

        bool isRightHandDrive() override {
            return scorpioImpli->isRightHandDrive();
        }
};

// Concrete Implementor
class ScorpioN_Impli_India : public AbstractScorpioImpl{
    public:
        void printSafetyRe1() override {
            cout<<"ScorpioN_Impli_India: 5 star safety rating"<<endl;
        }

        bool isRightHandDrive() override {
            return true;
        }
};

// Concrete Implementor
class ScorpioN_Impli_UK : public AbstractScorpioImpl{
    public:
        void printSafetyRe1() override {
            cout<<"ScorpioN_Impli_UK: 4 star safety rating"<<endl;
        }

        bool isRightHandDrive() override {
            return false;
        }
};

int main(){

    // ScorpioN with India implementation
    AbstractScorpio* scorpio = new ScorpioN(new ScorpioN_Impli_India());

    cout<<scorpio->isRightHandDrive()<<endl;
    scorpio->printSafetyRe1();

    return 0;
}