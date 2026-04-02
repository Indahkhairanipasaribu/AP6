#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int n;
    cout << "Input angka: ";
    cin >> n;

    int kuadrat = n * n;
    int jumlah = 0;

    while (kuadrat != 0) {
        jumlah += kuadrat % 10;
        kuadrat /= 10;
    }

    if (jumlah == n)
        cout << "ANGKA NEON";
    else
        cout << "BUKAN ANGKA NEON";
}