#include <iostream>
using namespace std ;

static int i  =  0; 
class className1
{
private:
  int rollNumber;

public:
 void setRollNumber()
 {
    rollNumber = ++i;
 }; 
 int getrollNumber()
 {
    return rollNumber ;
 } ;
   
};

int main()
{
    className1 s1 , s2;
    s1.setRollNumber();
    s2.setRollNumber();

    cout << " roll Number i s1 is  : " << s1.getrollNumber() << endl;
    cout << " roll Number i s2 is  : " << s2.getrollNumber()  ;
         
    return 0;
}