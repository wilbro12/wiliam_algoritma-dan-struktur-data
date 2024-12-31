#include <iostream>
using namespace std;

void Genap_Ganjil(int* bil) {
    if (*bil % 2 == 0) {
        cout << "200, 201 "; 
    } else {
        cout << "201 "; 
    }
}

int main() {
    int bil;
    cout << "Masukkan bilangan: ";
    cin >> bil;

    Genap_Ganjil(&bil);

    getchar();
}
