#if !defined(DefenderFactory_H)
#define DefenderFactory_H
#include <iostream>
#include "IVehicleFactory.hpp"
using namespace std;

class DefenderFactory : public IVehicle
{
public:
    void createEngine()
    {
        cout << "Defender ka engine bana rha hu." << endl;
    }
};

#endif