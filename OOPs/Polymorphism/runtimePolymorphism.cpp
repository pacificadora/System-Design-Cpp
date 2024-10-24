#include <iostream>
using namespace std;

/*
    Problem Statement
        Base class ke pointer/object se main relevant drawing method call karu.
        ShapeDrawing muje ek baar likhna h uske baad i can call it multiple times.
*/

class Shape
{
public:
    virtual void draw()
    {
        cout << "generic drawing...." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "this is circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "this is rectangle" << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    // because it sees the draw method of type Shape, due to early binding the Shape draw method is called irrespective
    // of which child class is associated to the pointer
    // s->draw();

    /*
        1. Hence we have concept of early and late binding
        2. Virtual Keyword -> Way to achieve polymorphism, by deferring binding decision to runtime.
        3. Override keyword -> Helps to make the intention clear and allows the compiler to enforce the overriding rules.
    */

    s->draw(); // draw is polymorphic. function remains the same at runtime but performs differently by calling relevant draw method.
}

int main()
{
    Circle C;
    Rectangle R;
    // ShapeDrawing(C) //error -> need to pass reference
    // Shape *s = &C; // this is possible becasue parent is holding the children. This is called UPCASTING
    // ShapeDrawing(&C);
    // ShapeDrawing(&R);

    // w/o virtual keyword
    Shape *s = new Shape();
    s->draw();

    // upcasting
    Shape *s1 = new Circle();
    s1->draw();

    Circle *c = new Circle();
    c->draw();

    // downcasting
    Shape *S1 = new Shape();
    Circle *C2 = (Circle *)S1;
    C2->draw();

    // without virtual keyword -> left wali class ka draw function call hoga due to early binding;

    return 0;
}