#include <iostream>
#include "RemoteScorpio.hpp"
using namespace std;
int main()
{
    RemoteScorpio *remote = new RemoteScorpio();
    string str;
    while (true)
    {
        cout << "Enter command (left, right, straight): ";
        cin >> str;

        if (str == "left")
        {
            remote->turnLeft();
        }
        else if (str == "right")
        {
            remote->turnRight();
        }
        else if (str == "straight")
        {
            remote->goStraight();
        }
        else
        {
            cout << "Wrong input instruction\n";
        }
    }
}