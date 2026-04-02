#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int angka;

    cout << "Input 5 buah angka: ";
    cin >> angka;

    while (angka != 0) {
        cout << angka % 10 << " ";
        angka /= 10;
    }

}