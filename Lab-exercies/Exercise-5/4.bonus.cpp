#include <iostream>
using namespace std;
class person
{
protected:
    string name, id_no;
    int salary;
    int bonus = 222;

public:
    virtual void getdata()
    { // I am making it virtual. so I can call deriv ed class member functions using bas class pointer
        cout << "Name of the person:";
        cin >> name;
        cout << "The ID-no of the person:";
        cin >> id_no;
        cout << "The salary of the person:";
        cin >> salary;
    }
    virtual void display_data()
    {
        cout << "Name of the person:" << name << endl;
        cout << "The id_no of the person:" << id_no << endl;
        cout << "The salary of the person:" << salary << endl;
    }
    virtual void display_bonus()
    {
        salary = salary + bonus;
        cout << "The salary of the " << name << " after adding bonus of" << bonus << ":" << salary << endl;
    }
};
class admin : public person
{
protected:
    string name_ad, id_no_ad;
    int salary_ad;
    int bonus_ad = 282;

public:
public:
    void getdata()
    {
        cout << "Name of the admin:";
        cin >> name_ad;
        cout << "The ID-no of the admin:";
        cin >> id_no_ad;
        cout << "The salary of the admin:";
        cin >> salary_ad;
    }
    void display_data()
    {
        cout << "Name of the admin:" << name_ad << endl;
        cout << "The id_no of the admin:" << id_no_ad << endl;
        cout << "The salary of the adminn:" << salary_ad << endl;
    }
    void display_bonus()
    {
        salary_ad = salary_ad + bonus_ad;
        cout << "The salary of " << name_ad << " after adding bonus of" << bonus_ad << ":" << salary_ad << endl;
    }
};

class account : public person
{
protected:
    string name_ac, id_no_ac;
    int salary_ac;
    int bonus_ac = 443;

public:
public:
    void getdata()
    {
        cout << "Name of the account:";
        cin >> name_ac;
        cout << "The ID-no of the account:";
        cin >> id_no_ac;
        cout << "The salary of the account:";
        cin >> salary_ac;
    }
    void display_data()
    {
        cout << "Name of the account:" << name_ac << endl;
        cout << "The id_no of the account:" << id_no_ac << endl;
        cout << "The salary of the account:" << salary_ac << endl;
    }
    void display_bonus()
    {
        salary_ac = salary_ac + bonus_ac;
        cout << "The salary of " << name_ac << "  after adding bonus of" << bonus_ac << ":" << salary_ac << endl;
    }
};
class master : public account, public admin
{
protected:
    string name_m, id_no_m;
    int salary_m;
    int bonus_m = 3443;

public:
public:
    void getdata()
    {
        cout << "Name of the master:";
        cin >> name_m;
        cout << "The ID-no of the master:";
        cin >> id_no_m;
        cout << "The salary of the master:";
        cin >> salary_m;
    }
    void display_data()
    {
        cout << "Name of the master:" << name_m << endl;
        cout << "The id_no of the master" << id_no_m << endl;
        cout << "The salary of the master:" << salary_m << endl;
    }
    void display_bonus()
    {
        salary_m = salary_m + bonus_m;
        cout << "The salary of " << name_m << " after adding bonus of" << bonus_m << ":" << salary_m << endl;
    }
};
int main()
{
    admin ad; // creating objects for derived class
    account ac;
    master m;
    person *p1 = &ad;
    person *p2 = &ac; // creating base pointer for derived class
    admin *p3 = &m;
    p1->getdata();
    p2->getdata(); // accessing specific member functions using base pointer
    p3->getdata();
    p1->display_data();
    p2->display_data();
    p3->display_data();
    p1->display_bonus();
    p2->display_bonus();
    p3->display_bonus();
}
