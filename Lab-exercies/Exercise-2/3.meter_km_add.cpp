#include <iostream>
using namespace std;
class dist
{
private:
	float d;

public:
	void get_km()
	{
		cout << "Enter distance in km:";
		cin >> d;
	};
	void get_m()
	{
		cout << "Enter distance in m:";
		cin >> d;
	};
	void add_km(dist &d1, dist &d2)
	{
		this->d = d1.d + d2.d;
		cout << d1.d << "km"
			 << "+" << d2.d << "km= " << this->d << "km" << endl;
	};
	void add_m(dist &d1, dist &d2)
	{
		this->d = (d1.d + d2.d);
		if (this->d > 1000)
		{
			this->d /= 1000;
			cout << d1.d << "m"
				 << "+" << d2.d << "m= " << this->d << "km" << endl;
		}
		else
		{
			cout << d1.d << "m"
				 << "+" << d2.d << "m= " << this->d << "m" << endl;
		}
	};
};

int main()
{
	dist d1, d2, r, d3, d4, m;
	d1.get_km();
	d2.get_km();
	r.add_km(d1, d2);
	d3.get_m();
	d4.get_m();
	m.add_m(d3, d4);
	return 0;
}