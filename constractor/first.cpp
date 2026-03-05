#include <iostream>
using namespace std ;
/*

class A{
    int i = 0 ;
    char name[20] ;
    int rollno ;

    public :
    A(){
        i = 1 ;
        name[20] = 'sandeep' ;
        rollno = 101 ; 
        // default constructor at means as soon as object is created this constructor will be called
        cout << "Constructor A called, i = " << i << endl ;
    }
    int getI(){
        return i ;
    }
} ;
*/

class B {
    int x ;
    public :
    B();
} ;

B :: B(){
    cout << "constractor B colled 2 " << endl ; 
};
int main()
{
    // A a1 ; // default constructor called here 
   
    B b1 ;
    
 return 0 ;
};