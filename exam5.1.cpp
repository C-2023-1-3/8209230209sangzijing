#include<iostream>
using namespace std;
class Time            
{public:
		void set_time(void)
		{
			cin >> hour;
			cin >> minute;
			cin >> sec;
		}
		void show_time(void)
		{
			cout << hour << ":" <<minute<<":"<< sec << endl;
		}
  private:
		int hour;
	int minute;
	int sec;
};
Time t1;
int main()
{
	t1.set_time();
	t1.show_time();
	return 0;
}
