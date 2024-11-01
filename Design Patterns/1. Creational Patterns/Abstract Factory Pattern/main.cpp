#include <iostream>
#include "Car.hpp"
#include "IVehicleFactory.hpp"
#include "ScorpioFactory.hpp"
#include "DefenderFactory.hpp"
using namespace std;

int main()
{
    IVehicle *scorpioFactory = new ScorpioFactory();
    IVehicle *defenderFactory = new DefenderFactory();
    Car *car1 = new Car(scorpioFactory);
    Car *car2 = new Car(defenderFactory);

    vector<Car *> cars;
    cars.push_back(car1);
    cars.push_back(car2);
    for (int i = 0; i < cars.size(); i++)
    {
        cars[i]->driveCar();
    }
    return 0;
}