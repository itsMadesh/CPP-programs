#include <iostream>
using namespace std;
class Student
{
private:
	string name;
	float t, e, m, s, ss, avg, total;
	int roll_no;
	char grade;

public:
	void set_details()
	{
		cout << "Name:";
		cin >> name;
		cout << "Roll_no:";
		cin >> roll_no;
		cout << "Enter 5 subject marks:";
		cin >> t >> e >> m >> s >> ss;
		total = t + e + m + s + ss;
		avg = (total) / 5;
		if (avg >= 90)
		{
			grade = 'A';
		}
		else if (avg < 90 && avg >= 80)
		{
			grade = 'B';
		}
		else if (avg < 80 && avg >= 60)
		{
			grade = 'C';
		}
		else if (avg < 60 && avg >= 45)
		{
			grade = 'D';
		}
		else
		{
			grade = 'F';
		}
	};
	void get_details()
	{
		cout << "Name:" << name << endl;
		cout << "Roll.No:" << roll_no << endl;
		cout << "T|E|M|S|SS:" << t << "|" << e << "|" << m << "|" << s << "|" << ss << endl;
		cout << "Total:" << total << endl;
		cout << "Avg:" << avg << endl;
		cout << "Grade:" << grade << endl;
	};
};
int main()
{
	int n;
	cout << "Enter no.of students:";
	cin >> n;
	Student s[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter details for student-" << i + 1 << ":\n";
		s[i].set_details();
	}
	for (int i = 0; i < n; i++)
	{
		cout << "\nStudent-" << i + 1 << ":\n";
		s[i].get_details();
	}
	return 0;
}