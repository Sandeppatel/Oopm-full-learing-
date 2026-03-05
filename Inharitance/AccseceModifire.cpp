#include <iostream>
using namespace std ;

class rectengle
{
      private :
    int length , breath ;

    public :
    void setLength(int l) {
        length = l ;
    }
    void setBreath(int b) {
        breath = b ;
    }
    int area() {
        return length * breath ;
    }
} ;

int main()
{
    rectengle r1 ;
    r1.setLength(10)  ;
    r1.setBreath(5) ;

    cout <<  r1.area() << endl ;

    return 0; 
}