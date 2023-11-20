#include <iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	int x = ch;
	if (x >= 97)
	{
		x = x - 32;
		cout << (char)x;
	}
	else 
	{
		x = x + 1;
		cout << (char)x;
	}
	return 0;
}