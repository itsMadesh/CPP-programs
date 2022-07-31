#include <iostream>
using namespace std;
class gcd
{
public:
    int a, b;
    gcd()
    {
        cout << "Enter value of a:";
        cin >> a;
        cout << "Enter value of b:";
        cin >> b;
    }
    int find_gcd()
    {
        int c = a < b ? a : b, gcd;
        for (int i = 1; i <= c; i++)
        {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
        return gcd;
    }
    int find_lcm()
    {
        return (a * b) / this->find_gcd();
    }
};

int main()
{
    gcd g;
    cout << "GCD of two numbers is:" << g.find_gcd() << "\n";
    cout << "LCM   of two numbers is:" << g.find_lcm() << "\n";
}