#include <iostream>
using namespace std;

int main() {
	
    int i, a = 0, b = 1;

    for (i = 0; i < 10; i++) {
        cout << b;
        if (i < 9) {
            cout << " + ";
        }
        
        a += b;
        b += 2; 
    }

    cout << " = " << a << endl;

    return 0;
}
