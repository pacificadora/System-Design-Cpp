#include <iostream>
#include <list>
#include <vector>
using namespace std;

class CustomIterator
{
public:
    virtual void next() = 0;
    virtual void hasNext() = 0;
};

class IAircraft
{
};
 
class Boing : public IAircraft
{
};
class Tejas : public IAircraft
{
};
class Chinook : public IAircraft
{
};

class Airforce
{
    // ye ek container jaha mera sara data pada hua h
    vector<IAircraft *> jets;
    IAircraft *helis[20];
    list<IAircraft *> cargo;
};

class AirforceIterator : public CustomIterator{

}

int main()
{
    vector<string> companyList;
    companyList.push_back("MS");
    companyList.push_back("Amzn");
    companyList.push_back("google");

    // iterate -> iterator use krke
}