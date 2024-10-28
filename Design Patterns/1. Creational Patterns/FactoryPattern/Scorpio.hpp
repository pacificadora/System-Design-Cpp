#if !defined(SCORPIO_H)
#define SCORPIO_H
#include <iostream>
using namespace std;

class Scorpio
{
public:
    virtual void driveCar()
    {
        cout << "this is my parent class Scorpio";
    }
};

#endif