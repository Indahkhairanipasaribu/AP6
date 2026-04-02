#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system (" cls");
    int a, b;
    cout << "Input dua buah angka: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "FPB: " << a;

}