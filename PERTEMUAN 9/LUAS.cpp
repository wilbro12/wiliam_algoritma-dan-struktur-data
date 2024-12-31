#include <iostream>
#define phi 3.14
using namespace std;

	void luas_persegi (float a) {
		float luas_persegi;
		luas_persegi = a * a;
		cout << "Luas Persegi = " << a << " x " << a << " = " << luas_persegi << " cm^2" << endl;
	}

	void luas_persegipanjang (float p, float b) {
		float luas_persegipanjang;
		luas_persegipanjang = p * b;
		cout << "Luas Persegi Panjang    = " << p << " x " << b << " = " << luas_persegipanjang << " cm^2" << endl;
	}

	void luas_tabung (float r, float c) {
		float luas_tabung;
		luas_tabung = 2 * phi * r * (r + c);
		cout << "Luas Tabung\t\t     = " << "2 x " << phi << " x " << r << " x (" << r << " + " << c << ") = " << luas_tabung << " cm^2" << endl; 
	}

	void volume_tabung (float r, float d) {
		float volume_tabung;
		volume_tabung = phi * r * r * d;
		cout << "Volume Tabung\t\t     = " << phi << " x " << r << " x " << r << " x " << d << " = " << volume_tabung << " cm^3" << endl;
	}

	int main () {
		
	int i;
	float a, p, l, r, t;
	
	cout << "Menghitung Luas Persegi" << endl;
	for (i = 0; i < 2; i++)
	{
		cout << "\nSisi Persegi = ";
		cin >> a;
		
		cout << "Luas Persegi = Sisi x Sisi" << endl;
		luas_persegi (a);
	}

	cout << "\n\nMenghitung Luas Persegi Panjang" << endl;
	for (i = 0; i < 2; i++)
	{
		cout << "\nPanjang Persegi Panjang = ";
		cin >> p;
		cout << "Lebar Persegi Panjang   = ";
		cin >> l;
		
		cout << "Luas Persegi Panjang    = Panjang x Lebar" << endl;
		luas_persegipanjang (p, l);
	}
	
	cout << "\n\nMenghitung Luas Tabung" << endl;
	for (i = 0; i < 2; i++)
	{
		cout << "\nJari - Jari Lingkaran Tabung = ";
		cin >> r;
		cout << "Tinggi Tabung\t\t     = ";
		cin >> t;
		
		cout << "Luas Tabung\t\t     = 2 x phi x r (r + t)" << endl;
		luas_tabung (r, t);
	}
	
	cout << "\n\nMenghitung Volume Tabung" << endl;
	for (i = 0; i < 2; i++)
	{
		cout << "\nJari - Jari Lingkaran Tabung = ";
		cin >> r;
		cout << "Tinggi Tabung\t\t     = ";
		cin >> t;
		
		cout << "Volume Tabung\t\t     = phi x r x r x t" << endl;
		volume_tabung (r, t);
	}
	return 0;
}
