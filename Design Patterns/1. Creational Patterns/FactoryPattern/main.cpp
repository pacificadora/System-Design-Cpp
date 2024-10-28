#include <iostream>
#include "ScorpioFactory.hpp"
#include "Scorpio.hpp"
using namespace std;

int main()
{
    // first i created the factory object
    ScorpioFactory *factory = new ScorpioFactory();

    // using that factory object, I created the object of specific car i want.
    Scorpio *Car1 = factory->createScorpioFactory('N');

    // call the functions of that car object.
    Car1->driveCar();
    return 0;
}