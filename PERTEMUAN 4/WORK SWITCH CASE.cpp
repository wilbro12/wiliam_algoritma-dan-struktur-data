#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string nama;
    float rata_rata, n1, n2, n3;

	cout << "Program Menghitung Nilai Rata-Rata" << endl;
    cout << "Nama Siswa : ";
    cin >> nama;
    
    cout << "Nilai Pertandingan I: ";
    cin >> n1;
    cout << "Nilai Pertandingan II: ";
    cin >> n2;
    cout << "Nilai Pertandingan III: ";
    cin >> n3;

    rata_rata = (n1 + n2 + n3) / 3;

    cout << "Siswa yang bernama " << nama<< endl;
	cout << "Memperoleh nilai rata-rata " << rata_rata << "dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah ";

	int hadiah;
    if (rata_rata >= 85) {
        hadiah = 1; // Komputer Core i5
    } 
	
	else if (rata_rata >= 70) {
        hadiah = 2; // Hadiah Uang Rp.2.500,000
    } 
	
	else {
        hadiah = 3; // Hadiah Hiburan
    }

    switch (hadiah) {
        case 1:
            cout << "Komputer Core i5" << endl;
            break;
        case 2:
            cout << "Uang sebesar Rp. 2.500,000" << endl;
            break;
        case 3:
            cout << "Hiburan" << endl;
            break;
        
    }

    getchar();
}
