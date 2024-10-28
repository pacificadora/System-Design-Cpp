#if !defined(SCORPIOCLASSIC_H)
#define SCORPIOCLASSIC_H

#include <iostream>
#include "Scorpio.hpp"
using namespace std;

class ScorpioClassic : public Scorpio
{
    void driveCar()
    {
        cout << "I am inside classic scorpio";
    }
};

#endif
