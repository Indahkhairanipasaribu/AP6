#include <iostream>
using namespace std;

void angka (int arr[], int n){
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    //topedata namaarray[panjangarray];
    int data[10] = {10,50,90,0,20,40,80,70,30,60};

    angka (data, 4);
}