/*------------------------*/
/* Program dengan pernyataan goto */
/*------------------------*/

#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a,b;
	char lagi;
	
	awal: 
//    clrscr();

    cout << "Masukkan Bilangan = ";
    cin >> a;
    b = a % 2;

    printf("Nilai %d %% 2 adalah = %d", a, b);
    printf("\n\nIngin Hitung Lagi [Y/T] : ");
    lagi = getche();

    if (lagi == 'Y' || lagi == 'y') {
        goto awal; 
    }

    if (lagi == 'T' || lagi == 't') {
        goto akhir; 
    }

	akhir:
    getch(); 
    return 0;
}
