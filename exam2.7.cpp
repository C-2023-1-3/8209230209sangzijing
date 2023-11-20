#include<iostream>
using namespace std;
int main()
{
	int i, a;
	for (i = 1; i < 6; i++)    
	{
		for (a = 1; a <= i; a++)   
			cout << "*";	
		cout << endl;
	}

	return 0;
}