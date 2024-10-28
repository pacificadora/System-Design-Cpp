#include <iostream>
#include "ScorpioFactory.hpp"
#include "Scorpio.hpp"
using namespace std;

int main()
{
    ScorpioFactory *factory = new ScorpioFactory();
    Scorpio *Car1 = factory->createScorpioFactory('N');
    Car1->driveCar();
    return 0;
}