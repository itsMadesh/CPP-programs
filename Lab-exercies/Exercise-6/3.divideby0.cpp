#include <iostream>
using namespace std;
class zero_error
{
public:
    zero_error()
    {
        cout << "Denominator cannot be zero!!" << endl;
    }
};
int DivEx(int num, int den)
{

    if (den == 0)
    {
        throw zero_error();
    }
    else
    {
        return num / den;
    }
}
int main()
{
    int a, b;
    cout << "ENTER NUMERATOR AND DENOMINATOR:";
    cin >> a >> b;
    try
    {
        cout << DivEx(a, b);
    }
    catch (zero_error)
    {
        cout << "Divide by Zero Error" << endl;
    }
}
