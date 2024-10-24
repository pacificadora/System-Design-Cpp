/*
    Delviering only essential information to the outer world
    Design and Programming method that separates interfaces from implmentations
    Abstraction in Header Files
        function implementation is hidden in header files.
        we could use the same program without knowing its inside working

    Abstraction using classes
        grouping data members and functions using access specifiers

    Abstract Class
        Class that contains at least one pure virtual function.
        If I define pure virtual function inside a class that class becomes interface.
        These classes cannot be instantiated.
        It has come from the idea of abstraction

    Design Strategy
        Abstraction divides code into 2 categories. interfaces and implementations
        So while creating your components, keep the interface separate from implementation
        If implementation changes, the interface remains the same.

*/

#include <iostream>
#include "bird.h"

using namespace std;

void birdDoesSomething(Bird *&bird)
{
    bird->eat();
}

int main()
{
    Bird *bird = new Sparrow();
    birdDoesSomething(bird);
    return 0;
}
