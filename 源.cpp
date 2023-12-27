#include<iostream>
using namespace std;
class Student {
private:
	int num;
	int score;
public:
	Student(int n = 0, int s = 0) :num(n), score(s) {};
	void display() {
		cout << "Ñ§ºÅ£º" << num << "·ÖÊý£º" << score << endl;
	}
	int get_score() {
		return score;
	}
	int get_num() {
		return num;
	}
};
void max(Student* p, Student n[]) {
	Student* max = new Student(0, 0);
	for (p = n; p < (n + 5); p++) {
		if (p->get_score() < (p + 1)->get_score()) {
			max = p + 1;
		}
	}
	cout << max->get_num() << " " << max->get_score() << endl;
	delete max;
}
int main() {
	Student n[5] = {
		Student(1,60),
		Student(2,70),
		Student(3,80),
		Student(4,90),
		Student(5,100)
	};
	Student* p = new Student(0, 0);
	max(p, n);
	return 0;
}