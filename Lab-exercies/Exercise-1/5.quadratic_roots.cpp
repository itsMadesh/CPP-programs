#include <iostream>
#include <math.h>
using namespace std;

void find_roots(float a, float b, float c)
{
    float d = b * b - 4 * a * c, x1, x2;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (d == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        x1 = -b / (2 * a);
        x2 = sqrt(-d) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << x1 << "+" << x2 << "i" << endl;
        cout << "x2 = " << x1 << "-" << x2 << "i" << endl;
    }
}
int main()
{
    float a, b, c;
    cout << "Enter coefficients a,b and c:";
    cin >> a >> b >> c;
    find_roots(a, b, c);
    return 0;
}
