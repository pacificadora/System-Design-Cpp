#include <iostream>
#include "Director.hpp"
#include "ICarBuilder.hpp"
#include "ScorpioBuilder.hpp"
#include "FortunerBuilder.hpp"
#include "Models/ICar.hpp"

using namespace std;

int main()
{
    // CarBuilder *scorpioBuilder = new ScorpioBuilder();
    // Director *director = new Director(scorpioBuilder);

    // // guidance of creating the car
    // director->construct();
    // Car *scorpio = scorpioBuilder->buildCar();

    CarBuilder *fortunerBuilder = new FortunerBuilder();
    Director *director = new Director(fortunerBuilder);
    director->construct();
    Car *fortuner = fortunerBuilder->buildCar();
}