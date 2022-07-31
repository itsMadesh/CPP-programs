#include<iostream>
using namespace std;
class complex{
	private:
		double real,img;
	public:
		complex operator+(complex& temp){
			complex t;
			t.real=real+temp.real;
			t.img=img+temp.img;
			return t;
		}
		complex operator-(complex& temp){
			complex t;
			t.real=real-temp.real;
			t.img=img-temp.img;
			return t;
		}
// 		complex operator*(complex& temp){

// 		}
// 		complex operator/(complex& temp){

// 		}
        friend ostream & operator << (ostream &out, complex &c);
        friend istream & operator >> (istream &in,  complex &c);

};
istream &operator>>(istream &in,complex& t){
    return in>>t.real>>t.img;

}
ostream &operator<<(ostream &out,complex& t){
    return out<<t.real<<t.img;
}
int main(){
	complex c1,c2;
	cin>>c1>>c2;
	complex c3=c1+c2;
	cout<<c3;
}