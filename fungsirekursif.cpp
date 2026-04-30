#include <iostream>
#include <cstdlib>
using namespace std;

int faktorial (int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * faktorial (n-1);
    }
}

// 5! = 5 ' faktorial (4)
//    = 5 * 4 * faktorial (3)  
//    = 5 * 4 * 3 * faktorial (2)  
//    = 5 * 4 * 3 * 2 *faktorial (1)  
//    = 5 * 4 * 3 * 2 * 1 
//      = 120

int main(){
    system ("cls");
    cout << faktorial (5);
}                    