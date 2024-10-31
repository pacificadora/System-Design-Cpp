#include <iostream>
#include "ScorpioFactory.hpp"
#include "Scorpio.hpp"
#include "ScorpioN.hpp"
#include "ScorpioClassic.hpp"
#include <vector>
using namespace std;

int main()
{
    // first i created the factory object
    // ScorpioFactory *factory = new ScorpioFactory();

    // using that factory object, I created the object of specific car i want.
    // Scorpio *Car1 = factory->createScorpioFactory('N');

    // call the functions of that car object.
    // Car1->driveCar();

    vector<Scorpio *> list;
    Scorpio *car1 = new ScorpioN();
    Scorpio *car2 = new ScorpioClassic();
    list.push_back(car1);
    list.push_back(car2);

    for (int i = 0; i < list.size(); i++)
    {
        list[i]->driveCar();
    }

    return 0;
}