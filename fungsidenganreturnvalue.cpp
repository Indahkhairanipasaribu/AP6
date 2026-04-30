#include <iostream>
#include <cstdlib>
using namespace std;

int tambah (int a, int b) {
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

int kali (int a, int b) {
    return a * b;
}

double bagi (int a, int b) {
    return a/b;
}


int main(){
    system ("cls");
    tambah(10,20);
    cout << tambah (10, 20) << endl; 

    cout << kurang (90, 0) << endl;

    cout << kali (9, 2) << endl;

    cout << bagi (50, 5) <<endl;


}                    