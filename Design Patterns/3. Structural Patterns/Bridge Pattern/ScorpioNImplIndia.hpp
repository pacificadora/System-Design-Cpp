#if !defined(IScorpioNImplIndia_H)
#define IScorpioNImplIndia_H
#include <iostream>
#include "ScorpioImplementation.hpp"
using namespace std;

class ScorpioNImplIndia : public AbstractScorpioImpl
{
private:
    AbstractScorpioImpl *scorpio;

public:
    bool isRightHanded()
    {
        return true;
    }
    void printSafetyReq()
    {
        cout << "safety norms for India";
    }
};
#endif