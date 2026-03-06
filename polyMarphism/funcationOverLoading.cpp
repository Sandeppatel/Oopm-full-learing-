#include <iostream>
using namespace std ;

class functionOverLoading{
    int x, y , z;
    public :
    void print(){
        cout << "here is funcation is not overloading " << endl ;
    } 
    void print(int a, int b){
        x= a ;
        y= b ;
        cout << "the value printed  " << a+b << endl ;
    }


} ;

int main(){
    functionOverLoading obj ;
    obj.print() ;
    obj.print(5, 10) ;

    return 0 ; 
}