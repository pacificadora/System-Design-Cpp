#if !defined(IScorpioBuilder_H)
#define IScorpioBuilder_H
#include <iostream>
#include "Models/ICar.hpp"
#include "ICarBuilder.hpp"
#include "Models/Scorpio.hpp"
using namespace std;

class ScorpioBuilder : public CarBuilder
{
    Scorpio *scorpio;

    void buildEngine()
    {
        cout << "scorpio engine is inserting" << endl;
    }
    void buildTyre()
    {
        cout << "scorpio tyre is inserting" << endl;
    }
    void buildChassis()
    {
        cout << "scorpio body is inserting" << endl;
    }
    void buildStereo()
    {
        cout << "scorpio stereo is inserting" << endl;
    }
    Car *buildCar()
    {
        cout << "scorpio ready h, le jao";
        return scorpio;
    }
};

#endif