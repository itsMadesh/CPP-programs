// 5. Write a program for overloading operator++ and operator— using friend 
// functions.

#include<iostream>
using namespace std;
class Unary{
		private:
			int x,y;
		public:
			Unary(int x,int y){
				this->x=x;
				this->y=y;
			}
			friend void operator++(Unary& obj,int n){
				obj.x++;
				obj.y++;
				cout<<"x="<<obj.x<<" y="<<obj.y<<endl;		
			}
			friend void operator--(Unary& obj,int n){
				obj.x--;
				obj.y--;
				cout<<"x="<<obj.x<<" y="<<obj.y<<endl;		
			}
};
int main(){
	int x,y;
	cout<<"Enter value of x and y:";
	cin>>x>>y;
	Unary obj(x,y);
	obj++;
	obj--;
	return 0;
}