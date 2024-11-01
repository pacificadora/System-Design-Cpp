#if !defined(IVehicle_H)
#define IVehicle_H
#include <iostream>
using namespace std;

class IVehicle
{
public:
    virtual void createEngine() = 0;
};

#endif