#if !defined(ScorpioFactory_H)
#define ScorpioFactory_H
#include <iostream>
#include "IVehicleFactory.hpp"
using namespace std;

class ScorpioFactory : public IVehicle
{
public:
    void createEngine()
    {
        cout << "scorpio ka engine bana rha hu." << endl;
    }
};

#endif