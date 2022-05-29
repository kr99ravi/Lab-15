#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void display_A()
    {
        cout << "a is a data member of class A." << endl;
        cout << "value of a is : " << a << endl;
    }
};

class B
{
public:
    int b;

    void display_B()
    {
        cout << "b is a data member of class B." << endl;
        cout << "value of b is : " << b << endl;
    }
};

class C : public B
{
public:
    int c;

    void display_C()
    {
        cout << "c is a data member of class C." << endl;
        cout << "value of c is : " << c << endl;
    }
};

class D : public A, public C
{
};

int main()
{
    D obj1;
    obj1.a = 15;
    obj1.b = 24;
    obj1.c = 37;
    obj1.display_A();
    cout << "<-******************->" << endl;
    obj1.display_B();
    cout << "<-******************->" << endl;
    obj1.display_C();
    return 0;
}
