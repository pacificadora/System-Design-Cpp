#include <iostream>
using namespace std;

class IObserver
{
public:
    virtual void proceed() = 0;
};

class ISubject
{
public:
    // to add observer
    virtual void addObserver(IObserver *obs) = 0;

    // to remove observer
    virtual void removeObserver(IObserver *obs) = 0;

    // to notify observer
    virtual void notifyObserver() = 0;
};

class ATCTower : public ISubject
{
    vector<IObserver *> observers;
    void addObserver(IObserver *obs)
    {
        cout << "Adding observer" << endl;
        observers.push_back(obs);
    }

    void removeObserver(IObserver *obs)
    {
        // logic to remove that observer
        cout << "removing observer" << endl;
        observers.pop_back();
    }

    virtual void notifyObserver()
    {
        for (int i = 0; i < observers.size(); i++)
        {
            // apply some logic
            cout << "hahahha" << endl;
        }
    }
};

class IAircraft
{
public:
    virtual void land() = 0;
    virtual void fly() = 0;
};

class Boing : public IAircraft, IObserver
{
public:
    ISubject *tower;

    Boing(ISubject *t)
    {
        this->tower = t;
    }

    void land()
    {
        // land krne ke baad, unsubscribe the subject
        // remove object from observer list.
        cout << "land ho gye hum" << endl;
        tower->removeObserver(this);
    }

    void fly()
    {
        // add the boing in the observer list
        tower->addObserver(this);
        cout << "oho boing udd rha h" << endl;
    }

    void proceed() {}
};

int main()
{
    ATCTower *tower = new ATCTower();
    IAircraft *boing = new Boing(tower);

    // sbse pehele tower hona chahiye. jaise ki ek youtube channel. tabhi to observers usko subscribe kar payenge
    // phir observer ko subscribe krne ke liye wo subject pass bhi krna padega

    boing->fly();
    boing->land();
}