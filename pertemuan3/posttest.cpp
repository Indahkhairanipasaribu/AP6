#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");

    int hari, tambah, hasil;

    cout << "Masukkan hari sekarang (1-7): ";
    cin >> hari;

    if (hari < 1 || hari > 7) {
        cout << "Hari tidak valid";
        return 0;
    }


    cout << "Masukkan jumlah hari prediksi: ";
    cin >> tambah;

    hasil = (hari + tambah) % 7;

    if(hasil == 1) cout << "Hari: Senin";
    else if(hasil == 2) cout << "Hari: Selasa";
    else if(hasil == 3) cout << "Hari: Rabu";
    else if(hasil == 4) cout << "Hari: Kamis";
    else if(hasil == 5) cout << "Hari: Jumat";
    else if(hasil == 6) cout << "Hari: Sabtu";
    else cout << "Hari: Minggu";


}