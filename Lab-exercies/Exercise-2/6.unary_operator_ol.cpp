#include <iostream>
using namespace std;
class IncDec
{
private:
    int a, b;

public:
    IncDec()
    {
        cout << "\nEnter any two integer numbers :";
        cin>>a>>b;
    }
    void operator--()
    {
        a--;
        b--;
    }
    void operator++()
    {
        a++;
        b++;
    }
    void display()
    {
        cout << "\na=" << a << ",b=" << b;
    }
};
int main()
{
    IncDec values;
    --values;
    cout << "\nAfter Decrementing : ";
    values.display();
    ++values;
    cout << "\nAfter Incrementing : ";
    values.display();
    return 0;
}
