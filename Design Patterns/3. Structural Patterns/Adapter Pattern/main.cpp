#include <iostream>
#include "HotAirBalloon.hpp"
#include "Adapter.hpp"
using namespace std;
int main()
{
    HotAirBalloon *hotAirBalloon = new HotAirBalloon();
    Adapter *adapter = new Adapter(hotAirBalloon);
    string gasUsed = hotAirBalloon->getGasUsed();
    adapter->start();
}