// 1. Write a program for Parameterized Constructor 

#include<iostream>
using namespace std;
class Add{
	private:
	int a,b,result;
	public:
	Add(int x,int y){
		a=x;
		b=y;
	}
	void add(){
		result=a+b;
		cout<<"sum of "<<a<<" and "<<b<<" is "<<result<<endl;
	}
};

int main(){
	int x,y;
	cout<<"Enter any two integer numbers:";
	cin>>x>>y;
	Add a1(x,y);
	a1.add();
	return 0;
}
