#if !defined(IScorpioN_H)
#define IScorpioN_H
#include <iostream>
#include "AbstractScorpio.hpp"
#include "ScorpioImplementation.hpp"
using namespace std;
class ScorpioN : public AbstractScorpio
{
private:
    AbstractScorpioImpl *scorpio;

public:
    ScorpioN(AbstractScorpioImpl *scorpio) : AbstractScorpio(scorpio), scorpio(scorpio)
    {
    }

    bool isRightHanded()
    {
        return scorpio->isRightHanded();
    }

    void printSafetyReq()
    {
        scorpio->printSafetyReq();
    }
};
#endif