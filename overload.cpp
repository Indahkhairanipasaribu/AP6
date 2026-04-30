#include <iostream>
using namespace std;

int tambah (int a, int b){
    return a + b;
}

double tambah (double a, double b){
    return a + b;
}

int main(){
    tambah (9,4);
    cout << tambah (9,4) << endl;
    cout << tambah (10.5, 44.3);
}