#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	for (int a = 1; a <= 9; a++)
	{
		i = (i + 1) * 2;
	}
	cout << "猴子共摘了" << i << "个桃子";
	return 0;
}