#if !defined(Car_H)
#define Car_H
#include <iostream>
#include "Models/IEngine.hpp"
#include "IVehicleFactory.hpp"
using namespace std;

// abstract layer to sit between client and multiple factories.
// We have to tell this layer, what kind of factory cars we want.
class Car
{
    IEngine *engine;
    IVehicle *carFactory;

public:
    Car(IVehicle *factory)
    {
        this->carFactory = factory;
    }

    void driveCar()
    {
        carFactory->createEngine();
        cout << "yeppiee gaadi mil gyi" << endl;
    }
};

#endif