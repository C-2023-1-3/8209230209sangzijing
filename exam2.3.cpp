#include<iostream>
using namespace std;
int main()
{
	float a, b, c, C;
	cout << "请输入三角形的三条边长：";
	cin >> a >> b >> c; 
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "该三条边无法构成三角形。" << endl;
	}
	else
	{
		C = a + b + c;
		cout << "该三角形的周长为：" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "该三角形是等腰三角形。" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形。" << endl;
		}
	}
	return 0;
}