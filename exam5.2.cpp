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
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value()
{
    cin >> num;
    cin >> name;
    cin >> sex;
}
