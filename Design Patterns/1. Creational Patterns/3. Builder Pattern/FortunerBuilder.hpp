#if !defined(IFortunerBuilder_H)
#define IFortunerBuilder_H
#include <iostream>
#include "Models/ICar.hpp"
#include "ICarBuilder.hpp"
#include "Models/Fortuner.hpp"
using namespace std;

class FortunerBuilder : public CarBuilder
{
    Fortuner *fortuner;

    void buildEngine()
    {
        cout << "fortuner engine is inserting" << endl;
    }
    void buildTyre()
    {
        cout << "fortuner engine is inserting" << endl;
    }
    void buildChassis()
    {
        cout << "fortuner engine is inserting" << endl;
    }
    void buildStereo()
    {
        cout << "fortuner engine is inserting" << endl;
    }
    Car *buildCar()
    {
        return fortuner;
    }
};

#endif