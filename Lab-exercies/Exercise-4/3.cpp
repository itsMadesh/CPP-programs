#include <iostream>
#include <string>
using namespace std;

class fruits
{
protected:
    int count;
    static int total_count;

public:
    static void increase_count(int n)
    {
        total_count += n;
    }
    static int fruit_count_total()
    {
        return total_count;
    }
};

int fruits::total_count = 0;

class apple : public fruits
{
public:
    void get_fruitcount()
    {
        cout << endl
             << "Enter Apple count:";
        cin >> count;
        increase_count(count);
    }
    int apple_count()
    {
        return count;
    }
};

class mango : public fruits
{
public:
    void get_fruitcount()
    {
        cout << endl
             << "Enter mango count:";
        cin >> count;
        increase_count(count);
    }
    int mango_count()
    {
        return count;
    }
};
int main()
{
    apple a1;
    a1.get_fruitcount();
    mango m1;
    m1.get_fruitcount();
    cout << endl
         << "Total apple count:" << a1.apple_count();
    cout << endl
         << "Total mango count:" << m1.mango_count();
    cout << endl
         << "Total fruit count:" << a1.fruit_count_total();
}
