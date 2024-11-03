#if !defined(ICar_H)
#define ICar_H
#include <iostream>
using namespace std;
class ICar
{
public:
    virtual void turnLeft() = 0;
    virtual void turnRight() = 0;
    virtual void goStraight() = 0;
};
#endif