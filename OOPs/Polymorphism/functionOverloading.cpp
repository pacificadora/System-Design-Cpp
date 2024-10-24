#include <iostream>
using namespace std;

// Polymorphism -> 2 types
/*
    type1 -> compile time polymorphism/static polymorphism
        type1 -> function overloading
        type2 -> operator overloading

    type 2 -> runtime polymorphism / dynamic
        type1 ->
*/

// function overloading
class Add
{
public:
    int sum(int x, int y)
    {
        cout << "adding 2 int ";
        return x + y;
    }
    int sum(int x, int y, int z)
    {
        cout << "Adding 3 int ";
        return x + y + z;
    }
    int sum(double x, double y)
    {
        cout << "adding 2 double ";
        return x + y;
    }
};

int main()
{
    Add add;
    cout << add.sum(2, 3) << endl;
    cout << add.sum(2, 4, 3) << endl;
    cout << add.sum(2.4, 3.5) << endl;
}