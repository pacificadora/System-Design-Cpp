#if !defined(ICarAdapter_H)
#define Icar_H
#include <iostream>
#include "ICar.hpp"
#include "HotAirBalloon.hpp"
using namespace std;
class Adapter : public ICar
{
public:
    HotAirBalloon *hotAirBalloon;

    // adapter ko batana padta h konse class pe adapter laga rhe ho. (which is HotAirBalloon here)
    Adapter(HotAirBalloon *balloon)
    {
        // shallow copy -> reference pr point kr rha h.
        this->hotAirBalloon = balloon;
    }
    void start()
    {
        string gasUsed = hotAirBalloon->getGasUsed();
        hotAirBalloon->start(gasUsed);
    }
};
#endif