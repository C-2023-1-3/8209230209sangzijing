#include<iostream>
using namespace std;

class Cuboid
{
public:
	void input();
	double volume();
	void output();
private:
	double length;
	double width;
	double height;
};

int main()
{
	int i;
	Cuboid c[3];
	for (i = 0; i < 3; ++i)
	{
		c[i].input();
	}

	for (i = 0; i < 3; ++i)
	{
		c[i].output();
	}

	return 0;
}

void Cuboid::input()            

{
	cout << "请输入长、宽、高:" << endl;
	cin >> length;
	cin >> width;
	cin >> height;
}

double Cuboid::volume() 
{
	return (length * width * height);
}

void Cuboid::output()        
{
	cout << "体积为：" << volume() << endl;
}