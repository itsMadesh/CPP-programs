// 2. Write a program for Declaring Static Members as Class Member.

#include<iostream>
using namespace std;
class Stud{
	private:
		int roll_no;
		string name;
	public:
    static int count;
		Stud(){
			count++;
		}
		void set_details(){
			cout<<"Enter student name and roll_no:";
			cin>>name>>roll_no;
		}
};

int Stud::count=0;

int main(){
	int n;
	cout<<"Enter no.of students:";
	cin>>n;
	Stud s[n];
	for(int i=0;i<n;i++){
			s[i].set_details();
	}
	cout<<"Students count:"<<Stud::count<<endl;
	return 0;
}