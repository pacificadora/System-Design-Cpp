#if !defined(RCScorpio_H)
#define RCScorpio_H
#include <iostream>
#include "ICar.hpp"
using namespace std;
class RCScorpio : public ICar
{
public:
    void turnLeft()
    {
        cout << "rc scorpio turning left" << endl;
    }
    void turnRight()
    {
        cout << "rc scorpio turning right" << endl;
    }
    void goStraight()
    {
        cout << "rc scorpio turning going straight" << endl;
    }
};
#endif