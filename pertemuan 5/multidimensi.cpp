#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    // int angka [3][3] = {
    //     {8,2,3},
    //     {1,9,6},
    //     {7,4,5}
    // };

    // cout << angka[2][1];

    // angka[0][0] = 8;
    // angka[0][1] = 2;
    // angka[0][2] = 3;
    // angka[1][0] = 1;
    // angka[1][1] = 9;
    // angka[1][2] = 6;
    // angka[2][0] = 7;
    // angka[2][1] = 4;
    // angka[2][2] = 5;

    //  cout << angka[2][1];

    //bisa ga loop for colab sama array? lets see!
    int angka [100][100]; //indexnya dari 0 sampe 99
    int x,y;

    cout << "jumlah baris : ";
    cin  >> x;

    cout << "jumlah kolom : ";
    cin  >> y;

    for (int baris =0; baris < x; baris++){
        for (int kolom = 0; kolom < y; kolom ++){
            cout << " Masukkan nilai [" << baris << "][" << kolom << "] : ";
            cin >> angka[baris][kolom];
        }
    }

    for (int baris =0; baris < x; baris++){
        for (int kolom = 0; kolom <y; kolom ++){
            cout << angka[baris][kolom];

        }
        cout << endl;
    }





}