#include <iostream>
using namespace std;

/*
DIP - (Dependency Inversion Principle)

=> Never depend on everything concrete class, always depend on abstraction.
*/


// Higher level module
class Application{
    private:
        FileLogger* logger;

    public:
        Application(){
            logger = new FileLogger();
        }
        void process(){
            logger->log("Processing application...");
        }
};

//Lower level module
class FileLogger{
    public:
        void log(const string& message){
            cout << "Logging to file: " << message << endl;
        }
};

// Define Abstraction
class ILogger{
    public:
        virtual ~ILogger() = default;
        virtual void log(const string& message) = 0;
};

// Implement Abstraction
class ConsoleLogger : public ILogger{
    public:
        void log(const string& message) override {
            cout << "COnsole logger: " << message << endl;
        }
};

// Higher level module now depends on abstraction
class Application{
    private:
        ILogger* logger;
    public:
        Application(ILogger* logger) : logger(logger) {}
        void process(){
            logger->log("Processing application...");
        }
};

int main(){

    FileLogger *fileLogger = new FileLogger();
    Application app(fileLogger);
    app.process();

    return 0;
}