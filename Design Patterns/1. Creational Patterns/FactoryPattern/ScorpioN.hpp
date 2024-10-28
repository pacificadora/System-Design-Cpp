#if !defined(SCORPION_H)
#define SCORPION_H

#include <iostream>
#include "Scorpio.hpp"
using namespace std;

class ScorpioN : public Scorpio
{
    void driveCar()
    {
        cout << "I am inside new scorpio n";
    }
};

#endif
