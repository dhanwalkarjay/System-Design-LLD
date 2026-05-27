#include <iostream>
using namespace std;

/*
    -> Chain of Responsibility Design Pattern is a behavioral design pattern that allows an object to send a command without knowing which object will handle the request. The request is passed along a chain of potential handlers until it is handled.

    -> The main idea behind the Chain of Responsibility pattern is to decouple the sender of a request from its receivers by giving multiple objects a chance to handle the request. This is achieved by creating a chain of handler objects, where each handler has a reference to the next handler in the chain.
*/

class AbstractRequest{
    protected: int requestCode;
    public:
        AbstractRequest(int code){
            this->requestCode = code;
        }

        int getRequestCode(){
            return requestCode;
        }

        ~AbstractRequest(){
            cout << "AbstractRequest Destructor called" << endl;
        }
};

class PressureIssueRequest : public AbstractRequest{
    public:
        PressureIssueRequest() : AbstractRequest(303) {}

        ~PressureIssueRequest(){
            cout << "PressureRequest Destructor called" << endl;
        }
}; 

class EngineIssueRequest : public AbstractRequest{
    public:
        EngineIssueRequest() : AbstractRequest(302) {}

        ~EngineIssueRequest(){
            cout << "PressureRequest Destructor called" << endl;
        }
}; 

class AbstractHandler{
    protected: AbstractHandler* nextHandler;
    
    AbstractHandler(AbstractHandler* next){
        nextHandler = next;
    }

    public:

        virtual void handleRequest(AbstractRequest* request){
            if(nextHandler != nullptr){
                nextHandler->handleRequest(request);
            }
        }

        ~AbstractHandler(){
            cout << "AbstractHandler Destructor called" << endl;
        }
};

class PressureIssueHandler : public AbstractHandler{
    static const int code = 303;

    public:
        PressureIssueHandler(AbstractHandler* next) : AbstractHandler(next) {}

        void handleRequest(AbstractRequest* request) override {
            if(request->getRequestCode() == code){
                cout << "Pressure Issue Request Handled" << endl;
            }
            else{
                AbstractHandler::handleRequest(request);
            }
        }
};

class EngineIssueHandler : public AbstractHandler{
    static const int code = 302;

    public:
        EngineIssueHandler(AbstractHandler* next) : AbstractHandler(next) {}

        void handleRequest(AbstractRequest* request) override {
            if(request->getRequestCode() == code){
                cout << "Engine Issue Request Handled" << endl;
            }
            else{
                AbstractHandler::handleRequest(request);
            }
        }
};

int main(){

    // create chain
    PressureIssueHandler* pressureHandler = new PressureIssueHandler(nullptr);
    EngineIssueHandler* engineHandler = new EngineIssueHandler(pressureHandler);

    // create request
    PressureIssueRequest* pressureRequest = new PressureIssueRequest();

    // handle request
    engineHandler->handleRequest(pressureRequest);

    return 0;
}