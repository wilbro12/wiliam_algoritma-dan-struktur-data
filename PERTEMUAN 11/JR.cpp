//struct sederhana
#include <iostream>
using namespace std;

int main() {
	
	struct mahasiswa {
		char nim [9];
		char nama [15];
		float nilai;
		
	};
	mahasiswa mahasiswa;
	//clrscr;
	cout << "Masukan NIM : ";
	cin >> mahasiswa.nim;
	cout << "Masukan Nama : ";
	cin >> mahasiswa.nama;
	cout << "Masukan Nilai Akhir : ";
	cin >> mahasiswa.nilai;
	cout << "\nData yang diinput adalah : \n\n ";
	cout << "NIM : " << mahasiswa.nim << endl;
	getchar();
	
}
