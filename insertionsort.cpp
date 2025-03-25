#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variabel inputan n

void input()
{ // Procedure Input
while (true)
{
cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan Jumlah element Array
cin >> n; // Memanggil variabel inputan n

if (n <= 20)
{ // Membuat kondisi n tidak lebih dari 20
break;
}
else
{
cout << "n\Array yang anda masukkan maksimal 20 Element.\n"; // Menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "==================" << endl; // Membuat tampilan susunan data element array
cout << "Masukkan Elemnt Array" << endl;
cout << "==================" << endl;


}