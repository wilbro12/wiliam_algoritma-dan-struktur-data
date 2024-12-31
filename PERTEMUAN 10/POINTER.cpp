// Implementation of Pointer Dereference

#include <iostream>
using namespace std;

//int main() 
//{
//	int ilham, amir, *raka;
//	ilham =75;
//	amir = ilham;
//	raka = &ilham;
//	
//	cout << "Nilai Ilham = " << ilham << endl;
//	cout << "Nilai Amir = " << amir << endl;
//	cout << "Nilai Raka = " << *raka << endl;
//	
//	getchar();
//}


//===========================================
//Implementation of Changing a Value by Pointer

//int main()
//{
//	int yofrie = 93;
//	int *hadiansyah;
//	//clrscr():
//	cout << "Nilai awal yofrie = " << yofrie << endl;
//	hadiansyah = &yofrie;
//	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
//	*hadiansyah = 50;
//	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
//	getchar();
//	
//}



///* Implementation of Pointer to Pointer */
//int main()
//{
//	int ilham;
//	int *raka;
//	int **amir;
//	//clrscr():
//	
//	ilham = 75;
//	
//	cout << "Nilai Ilham = " << ilham << endl;
//	raka = &ilham;
//	amir = &raka;
//	
//	cout << "Nilai Raka Hasil Mengakses Ilham = " << *raka << endl;
//	cout << "Nilai Amir Hasil Mengakses Ilham = " << **amir << endl;
//	
//	getchar();
//}

//Implementation of Pointer in String
int main()
{
	char bandMetal[] = "SEPULTURA";
	char *bandPunk = "RANCID";
	
	cout << "Nama Band Metal : " << bandMetal << endl;
	cout << "Nama Band Punk : " << bandPunk;
	bandPunk += 3; //menambah nilai penunjuk / pointer
	cout << "\nNama Band Metal : " << bandMetal << endl;
	cout << "Nama Band Punk : " << bandPunk;
	
	getchar();
}
