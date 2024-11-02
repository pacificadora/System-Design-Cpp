#include <iostream>
using namespace std;
#include "Scorpio.hpp"
#include "IScorpioPrototype.hpp"
#include "ScorpioEngine.hpp"
#include "ScorpioNEngine.hpp"

int main()
{
    ScorpioPrototype *prototype = new Scorpio();
    ScorpioPrototype *scorpioN = prototype->clone();

    // create a scorpio n car using cloning.
    scorpioN->setEngine(new ScorpioNEngine);
}