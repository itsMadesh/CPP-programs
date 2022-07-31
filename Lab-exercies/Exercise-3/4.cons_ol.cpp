// 4. Write a program for Constructor Overloading. 

#include<iostream>
using namespace std;
class Add{
	private:
		int a,b,c;
	public:
		Add(int a,int b){
			this->a=a;
			this->b=b;
			c=0;
			add_();
		}
		Add(int a,int b,int c){
			this->a=a;
			this->b=b;
			this->c=c;
			add_();
		}
		void add_(){
		cout<<"\nsum of "<<a<<","<<b<<" and "<<c<<" is "<<a+b+c<<endl;
		}
};
int main(){
	while(1){
		cout<<"\nOptions:\n1.Add three numbers\n2.Add two numbers with c=0\n3.Exit";
		int ch,a,b,c;
		cout<<"\nEnter your choice:";
		cin>>ch;
		if(ch==1){
			cout<<"\nEnter any three integer numbers:";
			cin>>a>>b>>c;
			Add(a,b,c);
		}
		else if(ch==2){
			cout<<"\nEnter any two integer numbers:";
			cin>>a>>b;
			Add(a,b);
		}
		else if(ch==3){
			break;
		}
		else{
			cout<<"Invalid choice";
		}
	}
	return 0;
}
