#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int number)
{
	for (int a = 2; a <= number / 2; a++)
	{
		if (number % a == 0)
		{
			return false;
		}
	}
	return true;
}
void x(int i)
{
	const int a = 200;
	const int b = 10;
	int c = 0;
	int number = 2;
	while (c < i)
	{
		if (is_prime(number))
		{
			c++;
			if (c % b == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}

int main()
{
	cout << "前两百个素数是 \n";
	x(200);

	return 0;
}