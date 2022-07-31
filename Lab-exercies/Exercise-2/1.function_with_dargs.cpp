#include <iostream>
using namespace std;
float area_circle(float r, float pi = 3.14)
{
	return r * r * 3.14;
};
int main()
{
	float r;
	cout << "Enter radius of a circle:";
	cin >> r;
	cout << "Area of a cirle with radius=" << r << " is " << area_circle(r);
	return 0;
}