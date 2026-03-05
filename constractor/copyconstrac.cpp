#include <iostream>
using namespace std;

class copyConstracture
{
    int x, y;

public:
    copyConstracture()
    {
        cout << "it is default constracture " << endl;
    }
    copyConstracture(int a, int b)
    {
        x = a;
        y = b;
        cout << "it is parameterised constracture " << endl;
    }

    copyConstracture(const copyConstracture &obj)
    {
        x = obj.x;
        y = obj.y;
        cout << " copy constructure " << endl;
    }
    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
};

int main()
{

    copyConstracture obj1(4, 5);

    copyConstracture obj2(obj1);

    copyConstracture obj3 = obj1;

    copyConstracture obj4 ;
  
    obj4 = obj1; 
    

    cout << " value fo x : " << obj1.getX() << " value fo y : " << obj1.getY() << endl;
    cout << " value fo x : " << obj2.getX() << " value fo y : " << obj2.getY() << endl;
    cout << " value fo x : " << obj3.getX() << " value fo y : " << obj3.getY() << endl;
    cout << " value fo x : " << obj4.getX() << " value fo y : " << obj4.getY() << endl;
    

    return 0;
}