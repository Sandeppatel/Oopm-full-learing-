#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

class Solution {
  public:
    int getSecondLargest(int arr[]) {
        int size = arr.size() ;
        if(size == 0 || size == 1) {
                return -1 ; 
        }
        sort(arr.begin() , arr.end()) ;
        
        int temp  = size-1 ;
        for(int i = size; i >= 0; i--)  {
        cout << arr[i] << " " ;
        }
    }
};

int main() {
int arr[] = {12, 35, 1, 10, 34, 1} ;

    return  0 ;
}