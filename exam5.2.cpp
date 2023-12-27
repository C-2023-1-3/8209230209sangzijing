#include <iostream>
#include"student.h"    
using namespace std;
int main()
{
    Student stud;
    stud.set_value();
    stud.display();
    return 0;
}
void Student::display()          
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value()
{
    cin >> num;
    cin >> name;
    cin >> sex;
}
