#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;

class Bird
{
public:
    virtual void eat() = 0; // this is called pure virtual function
    virtual void fly() = 0;
    /*
        classes that inherits this class, has to implement the virtual functions
    */
};

class Sparrow : public Bird
{
public:
    void eat()
    {
        cout << "sparrow is eating" << endl;
    }

    void fly()
    {
        cout << "sparrow is flying" << endl;
    }
};

class Eagle : public Bird
{
public:
    void eat()
    {
        cout << "Eagle is eating" << endl;
    }

    void fly()
    {
        cout << "Eagle is flying" << endl;
    }
};

#endif