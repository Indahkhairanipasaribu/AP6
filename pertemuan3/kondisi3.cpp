#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    int nilai = 100;
    int hadir = 1;

    // if (a >= 80){
    //     cout << "Lulus";
    // }
    // else if (a >= 30) {
    //     cout << "Remedial";
    // }
    // else {
    //     cout << "Tidak Lulus";
    // }

    // (a >= 10) ? cout << "Lebih besar dari 10" : cout << "Lebih kecil dari 10";

    if (nilai >= 80) {
        if  (hadir >= 8){
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    else {
        cout << "C";
    }
}