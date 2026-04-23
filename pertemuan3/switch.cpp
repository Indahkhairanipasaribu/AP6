//HANYA UNTUK CHAR DAN INTEGER

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    int bulan = 4;
    switch (bulan)
    {
    case 1 : cout << " Januari";
        break;
    case 2 : cout << " February";
        break;
    case 3 : cout<< " Maret";
        break;
    case 4 : cout<< " April";
        break;
    case 5 : cout<< " Mei";
        break;
    case 6 : cout<< " Juni";
        break;
    case 7 : cout<< " Juli";
        break;
    case 8 : cout<< " Agustus";
        break;
    case 9 : cout<< " Sebtember";
        break;
    case 10 : cout<< " Oktober";
        break;
    case 11 : cout<< " NOvember";
        break;
    case 12 : cout << " Desember";
        break;
    
    default: cout << " Bulan ga dalam range";
        break;
    }


}