#if !defined(IScorpioNImplUSA_H)
#define IScorpioNImplUSA_H
#include <iostream>
#include "ScorpioImplementation.hpp"
using namespace std;

class ScorpioNImplUSA : public AbstractScorpioImpl
{
private:
    AbstractScorpioImpl *scorpio;

public:
    bool isRightHanded()
    {
        return false;
    }
    void printSafetyReq()
    {
        cout << "safety norms for USA";
    }
};
#endif