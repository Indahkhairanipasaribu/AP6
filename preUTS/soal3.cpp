#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system ("cls");
    int n;
    cout << "Input jumlah baris: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        
        int a = 1;

        for (int j = 0; j <= i; j++) {
            cout << a << " ";
            a = a * (i - j) / (j + 1);
        }

        cout << endl;
    }

}