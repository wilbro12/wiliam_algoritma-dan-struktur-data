#include <iostream>
using namespace std;

int main ()
{
	int i, j;
	int data [2] [5] = {{2, 3, 4, 5, 2},{4, 2, 6, 2, 7}};
	
	for (i = 0;i < 2; i++)
	{
		for (j = 0;j < 5;j++)
		{
			cout << data [i] [j];
			cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}
