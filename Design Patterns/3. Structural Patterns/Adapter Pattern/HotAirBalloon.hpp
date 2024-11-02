#if !defined(HotAirBallon_H)
#define HotAirBallon_H
#include <iostream>
using namespace std;
class HotAirBalloon
{
public:
    string gasUsed = "Helium";

    void start(string gasUsed)
    {
        cout << "my hot air balloon is starting";
    }

    string getGasUsed()
    {
        return this->gasUsed;
    }
};
#endif