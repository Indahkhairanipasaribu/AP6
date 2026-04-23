#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");

    int a, b;

     cout << "Masukkan bilangan bulat: ";
     cin >> a;

         b = a++;

     cout << "Nilai variabel a setelah post increment: " << a << endl;
     cout << "Nilai variabel b dimana a sebelum increment: " << b << endl;

    return 0;
}