#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    system ("cls");
    vector<int> nilai;
    int x;

    //tambah = push
    //kurang = pop

    for (int i = 0; i < 5; i++){
        cin >> x; 
        nilai.push_back(x);
    }

    nilai.push_back (89);

    // nilai.push_back(100); //panjang = 1
    // nilai.push_back(55); //panjang = 2
    // nilai.push_back(90); //panjang = 3
    // nilai.push_back(0); //panjang = 4
    // nilai.push_back(99); //panjang = 5

    nilai.pop_back(); //hapus paling belakang

    nilai.erase(nilai.begin() + 1); //kalo ga pake tambah dia akan menghapus yang awal aja.

    //nama.size() = panjang
    for (int i = 0; i <nilai.size(); i++){
        cout << nilai[i] << " ";
    }
}