// 3. Write a simple program to implement Constructor and Destructor 

#include<iostream>
using namespace std;
class TV{
	private:
		string brand_name;
		float inches;
	public:
		TV(string name,float inches){
			this->brand_name=name;
			this->inches=inches;
		}
		~TV(){
			cout<<"Destructed the allocated memory";
		}
};
int main(){
	string brand_name;
	float inches;
	cout<<"Enter TV brand_name amd inches:";
	cin>>brand_name>>inches;
	TV t(brand_name,inches);
	return 0;
}