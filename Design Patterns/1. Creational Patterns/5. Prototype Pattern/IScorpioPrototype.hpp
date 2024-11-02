#if !defined(IScorpioPrototype_H)
#define IScorpioPrototype_H
#include <iostream>
#include "ScorpioEngine.hpp"
using namespace std;

class ScorpioPrototype
{
public:
    virtual ScorpioPrototype *clone() = 0;
    virtual void setEngine(ScorpioEngine *engine) = 0;
    // jis bhi feature/terms me changes krne h, unn sbko setters ke format me handle krne h
    // here, Scorpio is different in terms of engine.
    virtual void start() = 0;
};
#endif