#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	void set(int X, int Y)
	{
		x = X;
		y = Y;
		cout << "(" << x << "," << y << ")" << endl;
	}
	void setPoint(int i = 10, int j = 20)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point P;
	P.set(60, 80);
	P.setPoint();
	P.display();

	return 0;
}