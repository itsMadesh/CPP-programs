// C++ program for addition of two polynomials
// using Linked Lists
#include<iostream>
using namespace std;
class complex{
	private:
		double real,img;
	public:
		complex operator+(complex * temp){
			complex t;
			t.real=real+temp.real;
			t.img=img+temp.img;
			return t;
		}
		complex operator+(complex * temp){
			complex t;
			t.real=real-temp.real;
			t.img=img-temp.img;
			return t;
		}
		complex operator*(complex * temp){

		}
		complex operator/(complex * temp){

		}
		istream& operator>>(istream& in,complex& t){
			return in>>t.real>>t.imag;

		}
		ostream& operator>>(ostream& in,complex& t){
			return out<<t.real<<t.imag;
		}
};

int main(){
	complex c1,c2;
	cin>>c1>>c2;
	complex c3=c1+c2;
	cout<<c3;
}