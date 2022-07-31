// Program to print all prime factors
#include<iostream>
using namespace std;
#include<cmath>	
void primeFactors(int n)
{
	while (n%2 == 0)
	{
		cout<<"2"<<"\n";
		n = n/2;
	}
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
			cout<<"i="<<i<<"\n";
			n = n/i;
		}
	}
	if (n > 2)
		cout<<"n="<<n;
}
	
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
	primeFactors(n);
	return 0;
}
