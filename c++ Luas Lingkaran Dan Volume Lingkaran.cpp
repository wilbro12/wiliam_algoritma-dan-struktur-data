#include <iostream>
using namespace std;

int main ()
{
	int r, t, v;
	const float phi = 3.14286;

	
	cout <<"Masukkan Jari-Jari Lingkaran = ";
	cin >> r;
	
	float hasil_luas;
	hasil_luas = phi*r*r;
	
	cout <<endl;
	cout <<"Diketahui Luas Lingkaran:"<< endl;
	cout <<"Jari-Jari Lingkaran = " << r << endl;
	cout <<"pi = " << phi << endl;
	cout <<"L = " << "Pi x r x r" << endl;
	cout <<"L = " << phi <<" x "<< r << " x "<< r << endl; 
	cout <<"L = " << hasil_luas<< " cm " << endl;
	cout <<"Luas Lingkaran dengan Jari - Jari " << r << " cm " << "Adalah = " << hasil_luas << " cm " << endl;
	
	cout << "========================================================" << endl;
	cout <<"Masukkan Jari-Jari Lingkaran = ";
	cin >> r;
	cout << "Tinggi tabung = ";
	cin >> t;
	
	float hasil_volume;
	hasil_volume = phi*r*r*t;
	
	cout <<endl;
	cout <<"Diketahui Luas Lingkaran:"<< endl;
	cout <<"Jari-Jari Lingkaran = " << r << endl;
	cout <<"Tinggi Tabung = " << t << endl;
	cout <<"pi = " << phi << endl;
	cout <<"V = " << "Pi x r x r x t" << endl;
	cout <<"V = " << phi <<" x "<< r << " x "<< r << " x " << t << endl; 
	cout <<"V = " << hasil_volume<< " cm " << endl;
	cout <<"Luas Lingkaran dengan Jari - Jari " << r << " cm " << "Adalah = " << hasil_volume << " cm " << endl;
	
}
