#include <iostream>
using namespace std;

int main()
{
	cout << "Menghitung Luas Lingkaran " << endl;
	cout << "=============================================" << endl;
	cout << endl;
	
	float r, phi = 3.14, luas;
 
	cout << "Diketahui luas lingkaran : " << endl;
	cout << "jari-jari= ";
	cin >> r;
	
	luas = phi * r * r;
	
	cout << "Pi \t = " << phi << endl;
	cout << "L \t = Pi x r x r " << endl;
	cout << "L \t = " << phi << " x " << r << " x " << r << endl;
	cout << "L \t = " << luas << " cm" << endl;
 
	cout << "Luas lingkaran dengan jari-jari " << r << " adalah = " << luas << " cm" << endl;
 
	return 0;
}
