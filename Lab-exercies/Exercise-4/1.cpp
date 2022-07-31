#include <iostream>
#include <string>
using namespace std;
class grandfather
{
protected:
    int gf_age;
    string gf_name;

public:
    grandfather(int a, string n)
    {
        gf_age = a;
        gf_name = n;
    }

    void gf_display()
    {
        cout << "Name:" << gf_name;
        cout << endl
             << "Age:" << gf_age;
    }
};
class grandmother
{
protected:
    int gm_age;
    string gm_name;

public:
    grandmother(int a, string n)
    {
        gm_age = a;
        gm_name = n;
    }

    void gm_display()
    {
        cout << "Name:" << gm_name;
        cout << endl
             << "Age:" << gm_age;
    }
};

class father : public grandfather, public grandmother
{
protected:
    int f_age;
    string f_name;

public:
    father(int a1, string n1, int a2, string n2, int a3, string n3) : grandfather(a1, n1), grandmother(a2, n2)
    {

        f_age = a3;
        f_name = n3;
    }

    void display()
    {
        cout << "Name:" << f_name;
        cout << endl
             << "Age:" << f_age;
        cout << endl
             << "Father's name:" << gf_name;
        cout << endl
             << "Mother's name:" << gm_name;
    }
};

class son : public father
{
protected:
    int age;
    string name;

public:
    son(int a1, string n1, int a2, string n2, int a3, string n3, int a4, string n4) : father(a1, n1, a2, n2, a3, n3)
    {

        age = a4;
        name = n4;
    }

    void display()
    {
        cout << "Name:" << name;
        cout << endl
             << "Age:" << age;
        cout << endl
             << "Father's name:" << f_name;
        cout << endl
             << "Grandfather's name:" << gf_name;
        cout << endl
             << "Grandmother's name:" << gm_name;
    }
};

int main()
{
    string f,gf,gm,s;
    int f_age,gf_age,gm_age,s_age;
    cout<<"Enter Father's name:";
    cin>>f;
    cout<<"Enter Father's age:";
    cin>>f_age;
    cout<<"Enter child name:";
    cin>>s;
    cout<<"Enter child age:";
    cin>>s_age;
    cout<<"Enter Grandfather's name:";
    cin>>gf;
    cout<<"Enter Grandfather's age:";
    cin>>gf_age;
    cout<<"Enter Grandmother's name:";
    cin>>gm;
    cout<<"Enter Grandmother's age:";
    cin>>gm_age;
    father A(gf_age, gf, gm_age, gm, f_age, f);
    cout << endl
         << "Multiple inheritance" << endl;
    A.display();
    son B(gf_age, gf, gm_age, gm, f_age, f,s_age,s);
    cout << endl
         << "Multi-level inheritance" << endl;
    B.display();
}
