#if !defined(Director_H)
#define Director_H
#include <iostream>
#include "Models/ICar.hpp"
#include "ICarBuilder.hpp"
using namespace std;

class Director
{
public:
    CarBuilder *carBuilder;

    Director(CarBuilder *builder)
    {
        this->carBuilder = builder;
    }

    void construct()
    {
        carBuilder->buildEngine();
        carBuilder->buildTyre();
        carBuilder->buildChassis();
        carBuilder->buildStereo();
    }
};

#endif