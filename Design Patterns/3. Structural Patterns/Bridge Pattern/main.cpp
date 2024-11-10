#include <iostream>
using namespace std;
#include "AbstractScorpio.hpp"
#include "ScorpioN.hpp"
#include "ScorpioNImplIndia.hpp"
int main()
{
    AbstractScorpio *scorpio = new ScorpioN(new ScorpioNImplIndia());
    bool rightHand = scorpio->isRightHanded();
    cout << rightHand << endl;
    scorpio->printSafetyReq();
}