#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    
    cout << "Input jumlah baris: ";
    cin >> c;
    
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < (2 * c); b++)
        {
            if (a + b <= c - 1)
                cout << "*";
            else
                cout << " ";
            if ((a + c) <= b)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
 
    for (a = 0; a < c; a++)
    {
        for (b = 0; b < (2 * c); b++)
        {
            if (a >= b)
                cout << "*";
            else
                cout << " ";
            if (a >= (2 * c - 1) - b)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
