#if !defined(SCORPIOFACTORY_H)
#define SCORPIOFACTORY_H
#include <iostream>
#include "Scorpio.hpp"
#include "ScorpioN.hpp"
#include "ScorpioClassic.hpp"
using namespace std;

class ScorpioFactory
{
public:
    Scorpio *createScorpioFactory(char type)
    {
        switch (type)
        {
        case 'N':
            return new ScorpioN();

        case 'C':
            return new ScorpioClassic();

        default:
            return new Scorpio();
        }
    }
};

#endif