#include <iostream>
using namespace std ;

class A
{
public:
    A()
    {
        cout << "Constructor A called" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Constructor B called" << endl;
    }
   
};

int main()
{
    
    return 0;
}