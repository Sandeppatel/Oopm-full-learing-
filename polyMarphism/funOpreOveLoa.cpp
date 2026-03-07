#include <iostream>
using namespace std;

class complex {
     int real , imag ;
     public :
     void print(){
        if(imag < 0) {
            cout << real  <<  "i " << " " << imag << "j" << endl ; 
        } else {
            cout << real << "i " << " " << imag << "j" << endl;
        }
     }
     void getValue(){
        cin >> real >> imag ;
     } 
     void operator +() {
       real =  ++real ;
       imag = ++imag ;
     }

} ;

int main() {
    complex obj ;
    cout << "before input value :" << endl ; 
    obj.getValue() ;
    obj.print() ; 
    +obj ;
    cout << "after input value :" << endl; 
    obj.print() ;


    return 0 ;
}