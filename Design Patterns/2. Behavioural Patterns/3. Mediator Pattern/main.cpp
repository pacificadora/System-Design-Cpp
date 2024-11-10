#include <iostream>
using namespace std;

class IAircraft
{
public:
    virtual void land() = 0;
    virtual void requestPermissionForLanding() = 0;
};

class ATCTower
{
    // before hand sara data hona chahiye sare aircarfts ka
public:
    vector<IAircraft *> airCrafts;

    void requestToLandGrant(IAircraft *aircraft)
    {
        // check for permissions, if everything is cleared, grant permission.
        cout << "inside atc tower, providing with permission" << endl;
        aircraft->land();
    }
};

class Indigo : public IAircraft
{
public:
    ATCTower *atctower;

    Indigo(ATCTower *tower)
    {
        this->atctower = tower;
    }

    void land()
    {
        cout << "main land kr rha hu" << endl;
    }

    void requestPermissionForLanding()
    {
        cout << "calling atc tower for permission" << endl;
        this->atctower->requestToLandGrant(this);
    }
};

int main()
{
    ATCTower *tower;
    IAircraft *indigo = new Indigo(tower);
    indigo->requestPermissionForLanding();
}