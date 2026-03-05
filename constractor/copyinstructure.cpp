#include <iostream>
using namespace std;

// constructor & destructore with inheritance

class prarent{
    int x ;
    public :
    prarent(int b){
        x = b ;
        cout << " it is default constructor " << x << endl ;
    }
    ~prarent(){
        cout << " it is destructor " << endl ;
    }
} ;
class child : public prarent {
    int y ;
    public :
    child(int a):prarent(a) {
        y = a ;
        cout << " it is child default constructor " << y << endl ;
    }
    ~child() {
        cout << " it is child destructor " << endl ;
    }
} ;


int main() {

    child obj1(6) ; 


    return 0 ;

}