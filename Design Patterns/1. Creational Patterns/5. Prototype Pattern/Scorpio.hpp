// implementing the interface IScorpioPrototype
#if !defined(IScorpio_H)
#define IScorpio_H
#include <iostream>
#include "IScorpioPrototype.hpp"
#include "ScorpioEngine.hpp"
using namespace std;

// this is shallow copy
// class Scorpio : public ScorpioPrototype
// {
//     ScorpioEngine *engine = new ScorpioEngine();

//     ScorpioPrototype *clone()
//     {
//         return new Scorpio();
//     }

//     void setEngine(ScorpioEngine *engine)
//     {
//         this->engine = engine;
//     }

//     void start()
//     {
//     }
// };

// this is deep copy
class Scorpio : public ScorpioPrototype
{
    ScorpioEngine *engine;

private:
    Scorpio(ScorpioEngine *scorpioEngine)
    {
        // jo engine available h, ussi ki ek nayi copy bana rhe h.
        // yehi deep copy h.
        this->engine = new ScorpioEngine(*scorpioEngine);
    }

public:
    Scorpio()
    {
        this->engine = new ScorpioEngine();
    }

    ScorpioPrototype *clone()
    {
        // isme naya clone banane ke sath sath, naya engine bhi banana padega,
        // then only deep copy will be achieved.
        ScorpioPrototype *clonedScorpio = new Scorpio(this->engine);
        return clonedScorpio;
    }

    void setEngine(ScorpioEngine *engine)
    {
        this->engine = engine;
    }

    void start()
    {
    }
};

#endif