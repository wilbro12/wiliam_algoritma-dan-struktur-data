#include <iostream>
using namespace std;

int main()
{
//	inisialisasi variable
	
	int x = 50;   //	Mendeklarasikan variable x dengan nilai 50
	
	int a, b, c, d, e;    //	Mendeklarasikan variable
	
//	proses
	a = x > 5 + 5;    //	Menentukan variable x lebih besar dari 10 atau tidak : 50 > 10 (true)
	b = x > 100;      //	Menentukan variable x lebih besar dari 100 atau tidak : 50 > 100 (false)
	c = a && b;       //	Menggunakan operator && (and), c akan bernilai 1 (true) hanya jika a dan b sama-sama benar, maka c = 0 (false)
	d = a || b;       //	Menggunakan operator || (or), d akan bernilai 1 jika salah satu dari a atau b benar, maka d = 1 (true)
	e = ! (c);        //	Menggunakan operator ! (NOT), e akan bernilai 1 jika c salah, maka e = 1 (true)
	
//	output berupa 1 (benar) dan 0 (salah)
	cout << "\nNilai a = x > 5 + 5 = " << a << endl;  //	menampilkan nilai a pada output adalah 1 (true)
	cout << "\nNilai b = x > 100 = " << b << endl;    //	menampilkan nilai b pada output adalah 0 (false)
	cout << "\nNilai c = a && b = " << c << endl;     //	menampilkan nilai c pada output adalah 0 (false)
	cout << "\nNilai d = a || b = " << d << endl;     //	menampilkan nilai d pada output adalah 1 (true)
	cout << "\nNilai e = ! (c) = " << e << endl;      //	menampilkan nilai e pada output adalah 1 (true)
	
	getchar();    //	Menunggu input karakter agar jendela pada output tetap terbuka
	
}
