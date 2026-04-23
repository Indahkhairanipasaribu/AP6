#include <iostream>
using namespace std;

int main() {
    string hari;
    int tambah;
    int h, hasil;

    cout << "Masukkan hari sekarang: ";
    cin >> hari;



    if (hari == "Senin") h = 1;
    else if (hari == "Selasa") h = 2;
    else if (hari == "Rabu") h = 3;
    else if (hari == "Kamis") h = 4;
    else if (hari == "Jumat") h = 5;
    else if (hari == "Sabtu") h = 6;
    else if (hari == "Minggu") h = 7;
    else {
        cout << "Hari tidak valid";
        break;
    }
    

    cout << "Masukkan jumlah hari prediksi: ";
    cin >> tambah;

    hasil = (h + tambah) % 7;

    if (hasil == 1) cout << "Hari hasil: Senin";
    else if (hasil == 2) cout << "Hari hasil: Selasa";
    else if (hasil == 3) cout << "Hari hasil: Rabu";
    else if (hasil == 4) cout << "Hari hasil: Kamis";
    else if (hasil == 5) cout << "Hari hasil: Jumat";
    else if (hasil == 6) cout << "Hari hasil: Sabtu";
    else if (hasil == 0) cout << "Hari hasil: Minggu";

}