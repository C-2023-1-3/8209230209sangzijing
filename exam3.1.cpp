#include <iostream>
using namespace std;
int a(int m, int n)
{
	int k = 1;
	int i = 1;
	while (i <= m && i <= n)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
		i++;
	}
	return k;
}
int b(int m, int n)
{
	int k = 1;
	for (int i = 2; i <= m && i <= n; i++)
	{
		if (m % i == 0 && n % i == 0)
			k = i;
	}
	int x;
	x = m * n / k;
	return x;
}
int main()
{
	int m, n;
	cout << "������������Ȼ��" << endl;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	cout << m << "��" << n << "�����Լ����" << a(m, n) << endl;
	cout << m << "��" << n << "����С��������" << b(m, n) << endl;
	return 0;
}