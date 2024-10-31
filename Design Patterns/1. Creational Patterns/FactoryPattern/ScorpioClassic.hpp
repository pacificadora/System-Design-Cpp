#if !defined(SCORPIOCLASSIC_H)
#define SCORPIOCLASSIC_H

#include <iostream>
#include "Scorpio.hpp"
#include "models/ScorpioClassicEngine.hpp"
using namespace std;

class ScorpioClassic : public Scorpio
{

    IEngine *engine;
    void makeCar()
    {
        cout << "I am making engine for scorpio classic" << endl;
        this->engine = new ScorpioClassicEngine();
    }
    void driveCar()
    {
        this->makeCar();
        cout << "I am inside classic scorpio" << endl;
    }
};

#endif
