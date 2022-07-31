#include <iostream>
using namespace std;

int power(int n, int exp, int result)
{
    if (exp == 0)
    {
        return result;
    }
    return power(n, exp - 1, result * n);
}
int main()
{
    int n, exp;
    cout << "Enter a number:";
    cin >> n;
    cout << "Enter exponent of a number:";
    cin >> exp;
    cout << n << " power " << exp << " is " << power(n, exp, 1);
    return 0;
}