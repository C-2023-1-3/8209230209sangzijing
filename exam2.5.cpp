#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	cout << "请输入一行字符 :  \n";
	char x;
	int a = 0, b = 0, c = 0, d = 0, i;             
	while ((x = getchar()) != '\n')        
	{
		if (x <= 'z' &&x >= 'a' || x <= 'Z' && x >= 'A')
			a++;
		else if (x == ' ')
			b++;
		else if (x <= '9' &&x >= '0')
			c++;
		else
			d++;
	}

	cout << "字母: " << a << endl << "空格:  " << b << endl << "数字:  " << c << endl << "其他: " << d << endl;

	return 0;
}