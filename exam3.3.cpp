#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "请输入三边长：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout << "面积为" << double_area(side1, side2, side3) << endl;
	else
		cout << "三边无法构成三角形" << endl;
	return 0;
}