#if !defined(SCORPIO_H)
#define SCORPIO_H
#include <iostream>
#include "models/ScorpioEngine.hpp"
using namespace std;

class Scorpio
{
public:
    IEngine *engine;
    virtual void makeCar()
    {
        cout << "I am making engine for scorpio" << endl;
        this->engine = new ScorpioEngine();
    }
    virtual void driveCar()
    {
        cout << "this is my parent class Scorpio";
    }
};

#endif