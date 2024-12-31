	#include <iostream>
using namespace std;

int main ()
{
	int n, x, b, k;
	
	cout << "Program Perhitungan Matriks" << endl;
	cout << "---------------------------" << endl;
	cout << "Masukkan Jumlah Baris : "; 
	cin >> b;
	cout << "Masukkan Jumlah Kolom : "; 
	cin >> k;
	
	int MatriksA[b][k], MatriksB[b][k];
	 
	cout << "Matriks A : " << endl << endl;
	for (n = 0; n < b; n++)
	{
		for (x = 0; x < k; x++)
		{
			cout << "Matriks A" << "[" << n << "][" << x << "] : ";
			cin >> MatriksA[n][x];
		}
	}
	
	cout << "Matriks B :" << endl << endl;
	for (n = 0; n < b; n++)
	{
		for (x = 0; x < k; x++)
		{
			cout << "Matriks B" << "[" << n << "][" << x << "] : ";
			cin >> MatriksB[n][x];
		}
	}
	
	cout << "Hasil Penjumlahan Antar Matriks A dengan Matriks B : " << endl << endl;
	for (n = 0; n < b; n++)
	{
		for (x = 0; x < k; x++)
		{
			cout << MatriksA[n][x] + MatriksB[n][x] << "\t";
		}
		cout << endl;
	}
	
	cout << "Hasil Pengurangan Antar Matriks A dengan Matriks B : " << endl << endl;
	for (n = 0; n < b; n++)
	{
		for (x = 0; x < k; x++)
		{
			cout << MatriksA[n][x] - MatriksB[n][x] << "\t";
		}
		cout << endl;
	}
	
	cout << "Hasil Perkalian Antar Matriks A dengan Matriks B : " << endl << endl;
	for (n = 0; n < b; n++)
	{
		for (x = 0; x < k; x++)
		{
			cout << MatriksA[n][x] * MatriksB[n][x] << "\t";
		}
		cout << endl;
	}
	return 0;
}
