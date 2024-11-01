#if !defined(ICarBuilder_H)
#define ICarBuilder_H
#include <iostream>
#include "Models/ICar.hpp"
using namespace std;

class CarBuilder
{
public:
    virtual void buildEngine() = 0;
    virtual void buildTyre() = 0;
    virtual void buildChassis() = 0;
    virtual void buildStereo() = 0;
    virtual Car *buildCar() = 0;
};

#endif