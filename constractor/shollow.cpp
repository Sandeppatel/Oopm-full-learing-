#include <iostream>
using namespace std ;

class ShollowContructer
{
 public :
 int *data ;
//  this is constructor 
 ShollowContructer(int a ){
    data = new int (a) ;
        cout << "it is constructor :" << data  <<  endl ; 
 } 

//  this is shollow copy constructor 
 ShollowContructer(const ShollowContructer &obj) {
        data = obj.data; 
    cout << " it is shollow shollow copy constructor : " << data <<  endl ; 
 }

 void show () {
    cout << " the value of data is : " << *data << endl; 
 }
    
};


int main() {

    ShollowContructer obj1(10) ;
    obj1.show() ;

    return  0 ;
}

