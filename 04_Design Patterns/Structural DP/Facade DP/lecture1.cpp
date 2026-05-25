#include <iostream>
using namespace std;

/*
    -> facade means mask (mukhota) in hindi. 

    -> facade is simple abstraction over a complex system.

    -> facade is single entry point to access the multiple complex system.
    
    -> it hides underlaying complexity of the system and provides simple interface to the client.
*/

class PlumberSystem{
    public:
        void openWaterPipe(){
            cout<<"Water pipe opened"<<endl;
        }

        void closeWaterPipe(){
            cout<<"Water pipe closed"<<endl;
        }
};

class ElectricianSystem{
    public:
        void onElectricity(){
            cout<<"Electricity turned on"<<endl;
        }

        void offElectricity(){
            cout<<"Electricity turned off"<<endl;
        }
};

class WaterSystem{
    public:
        void openWater(){
            cout<<"Water opened"<<endl;
        }

        void closeWater(){
            cout<<"Water closed"<<endl;
        }
};

class GasSystem{
    public:
        void openGasPipe(){
            cout<<"Gas pipe opened"<<endl;
        }

        void closeGasPipe(){
            cout<<"Gas pipe closed"<<endl;
        }
};

class HomeFacade{
    PlumberSystem plumber;
    ElectricianSystem electrician;
    WaterSystem water;
    GasSystem gas;

    public:
        HomeFacade(){
            // constructor

        }

        void geyserOn(){
            plumber.openWaterPipe();
            electrician.onElectricity();
            cout<<"Geyser turned on"<<endl;
        }

        void geyserOff(){
            plumber.closeWaterPipe();
            electrician.offElectricity();
            cout<<"Geyser turned off"<<endl;
        }

        void stoveOn(){
            gas.openGasPipe();
            electrician.onElectricity();
            cout<<"Stove turned on"<<endl;   
        }

        void stoveOff(){
            gas.closeGasPipe();
            electrician.offElectricity();
            cout<<"Stove turned off"<<endl;
        }
};

int main(){

    HomeFacade home;
    home.geyserOn();
    home.geyserOff();

    return 0;
} 