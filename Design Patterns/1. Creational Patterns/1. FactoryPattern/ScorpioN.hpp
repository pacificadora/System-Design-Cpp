#if !defined(SCORPION_H)
#define SCORPION_H

#include <iostream>
#include "Scorpio.hpp"
#include "models/EngineModel/ScorpioNEngine.hpp"
using namespace std;

class ScorpioN : public Scorpio
{
public:
    IEngine *engine;
    void makeCar()
    {
        cout << "I am making engine for scorpio n" << endl;
        this->engine = new ScorpioNEngine();
    }
    void driveCar()
    {
        this->makeCar();
        cout << "I am inside new scorpio n" << endl;
    }
};

#endif
