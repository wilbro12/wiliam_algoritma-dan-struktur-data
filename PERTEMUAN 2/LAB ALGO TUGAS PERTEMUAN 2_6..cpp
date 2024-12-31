#include <iostream>
using namespace std;

int main() 
{
	
//	PENJUMLAHAN DAN PENGURANGAN
	int x, y, z;
	
	cout << "Masukan Angka Pertama : ";
	cin >> x;
	cout << "Masukan Angka Kedua : ";
	cin >> y;
	cout << "Masukan Angka Ketiga : ";
	cin >> z;
	
	int hasil = x + y - z;
	cout << "Hasil Penjumlahan dan Pengurangan : " << hasil << endl << endl;
	
//	PERKALIAN & PENGURANGAN
	int a, b, c;
	
	cout << "Masukan Angka Pertama : ";
	cin >> a;
	cout << "Masukan Angka Kedua : ";
	cin >> b;
	cout << "Masukan Angka Ketiga : ";
	cin >> c;
	
	hasil = a * b - c;
	cout << "Hasil Perkalian dan Pengurangan : "  << hasil << endl << endl;
	
//	PERKALIAN & PENJUMLAHAN 
	int h, i, j;
	
	cout << "Masukan Angka Pertama : ";
	cin >> h;
	cout << "Masukan Angka Kedua : ";
	cin >> i;
	cout << "Masukan Angka Ketiga : ";
	cin >> j;
	
	hasil = h * i + j;
	cout << "Hasil Perkalian dan Penjumlahan : " << hasil << endl;
	
	return 0;
}
