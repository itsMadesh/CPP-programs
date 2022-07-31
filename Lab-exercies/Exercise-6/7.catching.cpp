#include <iostream>
using namespace std;
class zero_error
{
public:
    zero_error()
    {
        cout << "Denominator cant be zero!!" << endl;
    }
};
class negative_error
{
public:
    negative_error()
    {
        cout << "The value is negative!!" << endl;
    }
};
void DivEx(int num, int den)
{

    if (den == 0)
    {
        throw zero_error();
    }
    else
    {
        cout << num / den;
    }
    if (num < 0 || den < 0)
    {
        throw negative_error();
    }
    else
    {
        cout << "The answer would be :" << num / den << endl;
        ;
    }
}
int main()
{
    int a, b;
    cout << "ENTER NUMERATOR AND DENOMINATOR:";
    cin >> a >> b;
    try
    {
        DivEx(a, b);
    }
    catch (...)
    {
        cout << "Error made!!" << endl;
    }
}
