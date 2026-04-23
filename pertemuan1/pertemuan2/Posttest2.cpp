#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int a, b;
    bool hasil;

    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua   : ";
    cin >> b;

    hasil = (a + b) > (a * b);

    cout << "Jumlah        : " << a + b << endl;
    cout << "Perkalian     : " << a * b << endl;
    cout << "Apakah jumlah > perkalian? : " << boolalpha << hasil << endl;

    return 0;
}