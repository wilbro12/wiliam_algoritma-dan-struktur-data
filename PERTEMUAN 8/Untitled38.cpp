#include <iostream>
using namespace std;

int main() {
    // Matriks A dan B
    int A[2][2], B[2][2], hasilPenjumlahan[2][2], hasilPengurangan[2][2], hasilPerkalian[2][2];

    // Input Matriks A
    cout << "Masukkan elemen matriks A (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Input Matriks B
    cout << "Masukkan elemen matriks B (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    // Penjumlahan Matriks A dan B
    cout << "\nHasil Penjumlahan Matriks A dan B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasilPenjumlahan[i][j] = A[i][j] + B[i][j];
            cout << hasilPenjumlahan[i][j] << " ";
        }
        cout << endl;
    }

    // Pengurangan Matriks A dan B
    cout << "\nHasil Pengurangan Matriks A dan B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasilPengurangan[i][j] = A[i][j] - B[i][j];
            cout << hasilPengurangan[i][j] << " ";
        }
        cout << endl;
    }

    // Perkalian Matriks A dan B
    cout << "\nHasil Perkalian Matriks A dan B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasilPerkalian[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                hasilPerkalian[i][j] += A[i][k] * B[k][j];
            }
            cout << hasilPerkalian[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
