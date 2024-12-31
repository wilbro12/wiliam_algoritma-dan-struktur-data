#include <iostream>
using namespace std;

int pangkat(int x, int y) 
{
    if (y == 0) { 
        return 1;
    } 
	else {
        return x * pangkat(x, y - 1); 
    }
}

int main() {
    int x, y;

    cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;

    cout << "Masukan Nilai X = ";
    cin >> x;
    cout << "Masukan Nilai Y = ";
    cin >> y;

    int hasil = pangkat(x, y);


    cout << x << " Dipangkatkan " << y << " = " << hasil << endl;

    return 0;
}
