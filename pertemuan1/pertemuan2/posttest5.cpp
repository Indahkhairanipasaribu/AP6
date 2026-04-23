#include <iostream>
#include <cstdlib>
using namespace std;


int main ()
{
system("cls");

int a, b;

//misal a = 5    0101
//      b = 10   1010
// AND   

cout << "Masukkan Bilangan bulat pertama : ";
cin >> a;
cout << "Masukkan bilangan bulat kedua : ";
cin >> b;

cout << (a & b) <<endl;
cout << (a | b) <<endl;

}