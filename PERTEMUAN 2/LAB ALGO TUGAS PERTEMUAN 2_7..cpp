//...program menghitung harga total
#include <iostream>
using namespace std;
#include <conio.h>
#define harga 4500.02//...menentukan harga dengan define

int main()
{
	float jumlah,total;
	cout << "Masukan Jumlah Barang = ";
	cin >> jumlah; total=harga*jumlah;
	cout << "\n Yang Harus dibayar = " <<total;
	getch();
	
}
