#if !defined(IAbstractScorpioImpl_H)
#define IAbstractScorpioImpl_H
#include <iostream>
using namespace std;
class AbstractScorpioImpl
{
public:
    virtual bool isRightHanded() = 0;
    virtual void printSafetyReq() = 0;
};
#endif