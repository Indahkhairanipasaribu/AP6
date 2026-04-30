#include <iostream>
#include <cstdlib>
using namespace std;

    // //cout <<"hello world ";

    // //tipedata namafungsi (parameter)
    // void halo() {
    //     cout << "hello world";
    //     }

    // void tampil(int x){ //parameter formal -> menerima input dari main
    //     cout << x;
    // }

    // int main(){
    //     system ("cls");
    //     tampil(10);
    
    // }

int x = 100; // variabel global karna bisa di akses di semua fungsi dan mein

void halo(){
    int x = 10 // lokal karna khusus fungsi
    cout << x;
}

int main (){
    halo();
}                    