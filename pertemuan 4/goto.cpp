#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    //Laboratorim Ilmu Komputer

    // goto a;
    // b :
    // cout << "ilmu ";
    // goto c;

    // a:
    // cout << "Laboratorium ";
    // goto b;

    // c:
    // cout << "Komputer";

    //goto label

    int a = 1;

    x:
    cout << a << endl;
    a++; //1 increment (+1) = 2

    if (a <= 10) {
        goto x;
    }


}