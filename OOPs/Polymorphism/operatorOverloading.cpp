#include <iostream>
using namespace std;

/*
    In C++ when operator are overloaded they execute user defined functions
    whenever used allowing for customised behaviour.

    C = A+B -> A keh rha h mujme B ko plus krdo aur C ko return krdo
*/

class Complex
{
public:
    int real;
    int imaginary;

    Complex()
    {
        real = imaginary = -1;
    }
    Complex(int r, int i)
    {
        this->real = r;
        this->imaginary = i;
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = this->real + obj.real;
        temp.imaginary = this->imaginary + obj.imaginary;
        return temp;
    }

    void print()
    {
        printf("[%d + i%d]\n", this->real, this->imaginary);
    }
};

int main()
{
    Complex A(2, 5);
    A.print();

    Complex B(2, 3);
    B.print();

    Complex C = A + B;
    C.print();
    return 0;
}