#include <iostream>
using namespace std;
class className
{
private:
    int length, breadth;

public:
    void setLength(int len)
    {
            length = len;
    };
    void setBreadth(int bre)
    {
        breadth = bre;
    };

    // getters
    int getLength()
    {
        return length;
    };
    int getBreadth()
    {
        return breadth;
    };
    int area()
    {
        return length * breadth;
    }
};

int main()
{

    className obj;
    obj.setLength(20);
    obj.setBreadth(20);

    cout << "Length is : " << obj.getLength() << endl; 
    cout << "Breadth is : " << obj.getBreadth() << endl;
    cout << " area is : " << obj.area() << endl;

    return 0;
}
