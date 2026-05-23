// BUILDER PATTERN

#include <iostream>
using namespace std;

class ICar{
    public: 
        virtual ~ICar(){};
};

class ICarBuilder{
    public:
        virtual void buildEnginee()=0;
        virtual void buildChasis()=0;
        virtual void buildTyres()=0;
        virtual void buildBodyShell()=0;
        
        // return the final product
        virtual ICar* build()=0;

        virtual ~ICarBuilder(){};
};

class Scorpio : public ICar{
    public:
        Scorpio(){
            cout<<"Scorpio Car Created"<<endl;
        }
};

class Fortuner : public ICar{
    public:
        Fortuner(){
            cout<<"Fortuner Car Created"<<endl;
        }
};

class ScorpioBuilder : public ICarBuilder{
    public:
        Scorpio s1;

        void buildEnginee() override{
            cout<<"Scorpio Engine Added"<<endl;
        }
        void buildChasis() override{
            cout<<"Scorpio Chasis Added"<<endl;
        }
        void buildTyres() override{
            cout<<"Scorpio Tyres Added"<<endl;
        }
        void buildBodyShell() override{
            cout<<"Scorpio BodyShell Added"<<endl;
        }

        ICar* build() override{
            cout<<"Scorpio Car Built"<<endl;
            return &s1;
        }
};

class FortunerBuilder : public ICarBuilder{
    public:
        Fortuner f1;

        void buildEnginee() override{
            cout<<"Fortuner Engine Added"<<endl;
        }
        void buildChasis() override{
            cout<<"Fortuner Chasis Added"<<endl;
        }
        void buildTyres() override{
            cout<<"Fortuner Tyres Added"<<endl;
        }
        void buildBodyShell() override{
            cout<<"Fortuner BodyShell Added"<<endl;
        }

        ICar* build() override{
            return &f1;
        }
};

class Director{
    public:
        ICarBuilder* builder;

        Director(ICarBuilder* b){
            builder = b;
        }

        void construct(){
            builder -> buildEnginee();
            builder -> buildChasis();
            builder -> buildTyres();
            builder -> buildBodyShell();
        }
};

int main(){

    ICarBuilder* scorpioBuilder = new ScorpioBuilder();
    Director* director = new Director(scorpioBuilder);
    director -> construct();
    ICar* car = scorpioBuilder -> build();

    return 0;
}