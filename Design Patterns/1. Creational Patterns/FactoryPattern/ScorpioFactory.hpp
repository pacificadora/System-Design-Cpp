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
            break;

        case 'C':
            return new ScorpioClassic();
            break;

        default:
            return new Scorpio();
            break;
        }
    }
};

#endif