#include <iostream>
#include <cctype>

using namespace std;

class distances
{
    int inches, feets;
    char sample_inches[10];

public:
    distances()
    {
        inches = 0;
        feets = 0;
    }
    int check(char *a)
    {
        for (int i = 0; a[i] != '\0'; a++)
        {
            if (!isdigit(a[i]) == 1)
                return 0;
        }
        return 1;
    }
    bool is_int()
    {
        try
        {
            if (check(sample_inches) == 0)
            {
                throw "Invalid input";
            }
            inches = stoi(sample_inches);
            return true;
        }
        catch (const char *ch)
        {
            cout << ch;
            return false;
        }
        catch (...)
        {
            cout << "out of range";
            return false;
        }
    }
    void get_distance()
    {
        while (1)
        {
            cout << endl
                 << "Inch:";
            cin >> sample_inches;
            if (is_int() == true)
            {
                try
                {
                    if (inches >= 12 || inches < 0)
                    {
                        throw "Inches out of range";
                    }
                    break;
                }

                catch (const char *ch)
                {
                    cout << endl
                         << ch;
                }
            }
        }
    }
};
int main()
{
    distances d;
    d.get_distance();
}
