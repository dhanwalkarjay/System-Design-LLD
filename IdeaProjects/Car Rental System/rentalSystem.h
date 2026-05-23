#include <string>
#include <vector>
class CarRentalSystem
{
private:
    string name;
    vector<CarRentalBranch> branches;

    static CarRentalSystem system = NULL;
public:
    CarRentalSystem(/* args */);
};

CarRentalSystem::CarRentalSystem(/* args */)
{
}

CarRentalSystem:~CarRentalSystem()
{
}
