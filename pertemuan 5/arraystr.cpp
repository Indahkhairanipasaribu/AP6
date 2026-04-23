#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");

    string nama = "HELLO"; //panjang array 7 dan index 0-6
    string nami = "WORLD";

    // string namo = nami; // ini dia ngambil satu dengan kita buat var baru.

    // cout << nam0;

    //cout << nama + nami; // ini mnjadikan kedua nama jadi satu baris 
    
    cout << nama.length() << endl;
    cout << nami. length() << endl;
    cout << (nama + nami). length() << endl;
    // tiga ini untuk menampilan panjang karakter

    cout << nama.substr(1,3) << endl; // ini kalo mau karakter tertentu




}