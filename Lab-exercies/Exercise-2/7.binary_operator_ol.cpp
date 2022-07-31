#include <iostream>
using namespace std;
class Addobj
{
    int x;
    public:
        void input()
        {
            cout << "\nEnter the number: ";
            cin >> x;
        }
        Addobj operator+(Addobj &ob)
        {
            Addobj A;
            A.x = x + ob.x;
            return (A);
        }
        void print()
        {
            cout << "\nThe sum of two object values is: " << x;
        }
};
int main()
{
    Addobj a, b, res;
    a.input();
    b.input();
    res = a + b;
    res.print();
    return 0;
}