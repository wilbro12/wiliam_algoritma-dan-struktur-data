#include <iostream>
using namespace std;

int main()
{
	cout << "Menghitung Volume Tabung " << endl;
	cout << "=============================================" << endl;
	cout << endl;
	
	float r, phi = 3.14, t, volume;
 
	cout << "Diketahui Volume Tabung : " << endl;
	cout << "jari-jari = ";
	cin >> r;
	cout << "tinggi = ";
	cin >> t;
	
	volume = phi * (r * r) * t;
	
	cout << "Pi \t = " << phi << endl;
	cout << "V \t = Pi x (r x r) x t " << endl;
	cout << "V \t = " << phi << " x " << (r * r) << " x " << t << endl;
	cout << "V \t = " << volume << " cm" << endl;
 
	cout << "volume dengan jari-jari = " << volume << " cm" << endl;
 
	return 0;
}
