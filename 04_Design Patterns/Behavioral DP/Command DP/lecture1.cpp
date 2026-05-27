#include <iostream>

using namespace std;

/*

    -> this pattern decomple two things 
        1. the object that invokes the operation
        2. the object that knows how to perform it

    -> Invoker -------> Command ---------> Receiver
       Invoker <------- Command <--------- Receiver

    -> Command is an interface that declares a method for executing a command
    
    -> ConcreteCommand is a class that implements the Command interface and defines a binding between a Receiver object and an action. It implements the execute method by invoking the corresponding operation(s) on Receiver. 

*/

class ICommand{
    public:
        virtual void execute() = 0;
};

class BreakMechanism{
    public:
        void applyBreak(){
            cout << "Break applied" << endl;
        }
};

class EngageBreakCommand : public ICommand{
    BreakMechanism* breakMechanism;
    public:
        EngageBreakCommand(BreakMechanism* breaking){
            this->breakMechanism = breaking;
        }

        void execute() override{
            breakMechanism->applyBreak();
        }
};

class AirSuspensionMechanism{
    public:
        void applyAirSuspension(){
            cout << "Air suspension applied" << endl;
        }
};

class AirSuspensionCommand : public ICommand{
    AirSuspensionMechanism* airSuspension;
    public:
        AirSuspensionCommand(AirSuspensionMechanism* airSuspension){
            this->airSuspension = airSuspension;
        }

        void execute() override{
            airSuspension->applyAirSuspension();
        }
};

class Panel{
    ICommand* commands[5];
    public:
        Panel(){

        }

        void setCommand(int index, ICommand* cmd){
            if(index < 0 || index >= 5) return;
            commands[index] = cmd;
        }

        void LiftSuspension(){
            ICommand* cmd = commands[0];
            cmd->execute();
        }

        void ApplyBreak(){
            ICommand* cmd = commands[1];
            cmd->execute();
        }
};

int main(){

    // Receiver
    BreakMechanism* breakMechanism = new BreakMechanism();
    AirSuspensionMechanism* airSuspensionMechanism = new AirSuspensionMechanism();   

    // Command
    EngageBreakCommand* engageBreakCommand = new EngageBreakCommand(breakMechanism);
    AirSuspensionCommand* airSuspensionCommand = new AirSuspensionCommand(airSuspensionMechanism);

    // Invoker
    Panel* btnPanel = new Panel();

    // setting the commands to the invoker
    btnPanel->setCommand(0, airSuspensionCommand);
    btnPanel->setCommand(1, engageBreakCommand);

    btnPanel->LiftSuspension();
    btnPanel->ApplyBreak();

    return 0;
}