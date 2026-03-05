#include <iostream>
using namespace std ;
/*

// this is destractor example 
class A {
    // int c ;
    public  : 
    A(){
        cout << "Constructor A called " << endl ;
    }
    ~A(){
        cout << "destractor ~A collled " << endl ;
    }
} ;
*/


// paremeterized constractor
class Animal {
   
    public :
    int  i ;
    float f ;

    Animal(int vali , float valf){
        i = vali ;
        f =  valf ;
      cout << " Constractor  "  <<   endl ;
    } 

    

};


int main() {

    /*
      A a1 ;   // here constructor is colled 
    
    int x  = 1 ;
    if(x){
        A a2 ; // here constructor is colled
    } ; // here destractor is colled for object a2 

    cout << "checking ofter if block " << endl ;
    return 0 ;

    
    */
  
    // paremeterized constractor example
    Animal a1(10 , 20.1) ;
    cout << "Animal i = " << (float)a1.f << "  Animal f = " << a1.i << endl ;

    
  
} // here destractor is colled for object a1