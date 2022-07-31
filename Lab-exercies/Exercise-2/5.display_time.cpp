#include <iostream>
#include<iomanip>
#include <cstring>
using namespace std;

class timestamp
{
	int HH, MM, SS;
	int set_second;

public:
	timestamp()
	{
		HH = 00;
		MM = 00;
		SS = 00;
	}
	void get_time()
	{
		cout << "Enter the seconds interval: ";
		cin >> set_second;
	}
	void convert()
	{

		HH = set_second / 3600;
		MM = (set_second - HH * 3600) / 60;
		SS = (set_second - HH * 3600 - MM * 60);
	}
	void display()
	{
		convert();
		cout << endl
			 << "The HH:MM:SS format of the time is:";
		cout<<setw(2)<<setfill('0')<<HH<<":";
		cout<<setw(2)<<setfill('0')<<MM<<":";
		cout<<setw(2)<<setfill('0')<<SS<<endl;
	}
};

int main()
{
	timestamp t1;
	t1.get_time();
	t1.display();
}
