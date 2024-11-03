#if !defined(RemoteScorpio_H)
#define RemoteScorpio_H
#include <iostream>
#include "ICar.hpp"
#include "RCScorpio.hpp"
using namespace std;
class RemoteScorpio : public ICar
{
private:
    RCScorpio *scorpio = new RCScorpio();

public:
    void turnLeft()
    {
        cout << "remote scorpio turning left" << endl;
        this->scorpio->turnLeft();
    }
    void turnRight()
    {
        cout << "remote scorpio turning right" << endl;
        this->scorpio->turnRight();
    }
    void goStraight()
    {
        cout << "remote scorpio turning going straight" << endl;
        this->scorpio->goStraight();
    }
};
#endif