#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;
    string dob;
    student()
    {
        cout << "Welcome!!" << endl;
    }

    void input(int no)
    {
        roll = no;
        cout << endl
             << "Enter name:";
        cin >> name;
        cout << endl
             << "Enter dateOfBirth:";
        cin >> dob;
    }
    void display()
    {
        cout << "Rollno:" << roll;
        cout << endl
             << "Enter name:" << name;
        cout << endl
             << "Enter dateOfBirth:" << dob;
    }
};
int main()
{
    int r;
    cout<<"Enter student roll_no:";
    cin >> r;
    student s;
    student *a;
    a = &s;
    a->input(r);
    a->display();
}
