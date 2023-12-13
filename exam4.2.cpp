#include<iostream>
using namespace std;

const int s = 10;

void bubbleSort(double list[10]) {
	double a;
	bool changed = true;
	do
	{
		changed = false;
		for (int x = 0; x < s - 1; x++) {
			if (list[x] > list[x + 1]) {
				a = list[x];
				list[x] = list[x + 1];
				list[x + 1] = a;
				changed = true;
			}
		}
	} while (changed == true);
}

int main()
{
	double list[s];
	cout << "请输入十个数字: \n";
	for (int i = 0; i < s; i++)
		cin >> list[i];
	bubbleSort(list);

	for (int k = 0; k < s; k++)
		cout << list[k] << " ";
	cout << endl;

	return 0;
}