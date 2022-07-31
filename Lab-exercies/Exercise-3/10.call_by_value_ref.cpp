#include <iostream>
using namespace std;

int incrementA(int &a, int b)
{
    a += b;
    return a;
}
int incrementB(int a, int b)
{
    a += b;
    return a;
}

int main()
{
    int a;
    cout << "Enter value for a:";
    cin >> a;
    cout << "Initially\n";
    cout << "A:" << a;
    cout << "\nCall by value\n";
    cout << "\nNew A:" << incrementB(a, 100);
    cout << "\nOld A:" << a;
    cout << "\nCall by reference\n";
    cout << "\nNew A:" << incrementA(a, 100);
    cout << "\nOld A:" << a;
}
