#include <iostream>
using namespace std;

int main()
{
	
	int a, bil;
	
	bool prima = true;
	
	cout << "Masukan sebuah bilangan positif = ";
	cin >> bil;
	
	if (bil ==0 || bil ==1) {
		prima = false;
	}
	
	for (a = 2; a <= bil/2; a++){
		if (bil % a == 0){
			prima = false;
		}
	}
	
	if (prima)
	 cout << bil << " " << "Termasuk Bilangan Prima";
	else
	 cout << bil << " " << "Bukan Bilangan Prima";
	 
    return 0;
}
