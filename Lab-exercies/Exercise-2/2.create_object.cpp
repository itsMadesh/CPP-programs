#include <iostream>
using namespace std;
class Employee
{
private:
	string name, dest;
	double sal;
	long int empno;

public:
	void set_details()
	{
		cout << "Enter Name:";
		cin >> name;
		cout << "Enter empno:";
		cin >> empno;
		cout << "Enter destination:";
		cin >> dest;
		cout << "Enter Salary:";
		cin >> sal;
	};
	void get_details()
	{
		cout << "Employee details:\n";
		cout << "Name:" << name << endl;
		cout << "Empno:" << empno << endl;
		cout << "Destination:" << dest << endl;
		cout << "Salary:" << sal << endl;
	};
};
int main()
{
	Employee e1;
	e1.set_details();
	e1.get_details();
	return 0;
}
