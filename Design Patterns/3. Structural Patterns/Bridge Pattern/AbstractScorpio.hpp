#if !defined(IAbstractScorpio_H)
#define IAbstractScorpio_H
#include <iostream>
#include "ScorpioImplementation.hpp"
using namespace std;
class AbstractScorpio
{
public:
    // Creating the bridge through composition
    AbstractScorpioImpl *scorprioImpl;
    AbstractScorpio(AbstractScorpioImpl *sc)
    {
        this->scorprioImpl = sc;
    }

    virtual bool isRightHanded() = 0;
    virtual void printSafetyReq() = 0;
};
#endif