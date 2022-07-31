#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class RBI
{
protected:
    int min_rate;
    int min_bal;
    int max_withdraw_limit;

public:
    RBI()
    {
        min_rate = 3;
        min_bal = 300;
        max_withdraw_limit = 20000;
    }
};

class account
{
    float balance;
    string accno, branch;

public:
    void get_acc()
    {
        cout << "Accno:";
        cin >> accno;
        cout << endl
             << "Balance:";
        cin >> balance;
        cout << endl
             << "Branch:";
        cin >> branch;
    }
    void display_acc_details()
    {
        cout << " Account no:" << accno << endl;
        cout << "Balance:" << balance << endl;
        cout << "Branch:" << branch;
    }
    int check_balance()
    {
        return balance;
    }
};

class SBI : public RBI
{
protected:
    account A;
    int bank_rate, bank_min_bal, bank_withdraw_limit;

public:
    void set(int x, int y, int z)
    {
        if (x >= min_rate && y >= min_bal && z <= max_withdraw_limit)
        {
            bank_rate = x;
            bank_min_bal = y;
            bank_withdraw_limit = z;
        }
        else
        {
            cout << endl
                 << "Unauthorised limits!!";
        }
    }

    void new_acc()
    {
        A.get_acc();
    }
    bool check()
    {
        if (bank_min_bal < A.check_balance())
            return true;
        return false;
    }
    void display()
    {
        A.display_acc_details();
        cout << endl
             << "Annual interest:" << A.check_balance() * bank_rate / 100;
    }
};

class ICICI : public RBI
{
protected:
    account A;
    int bank_rate, bank_min_bal, bank_withdraw_limit;

public:
    void set(int x, int y, int z)
    {
        if (x >= min_rate && y >= min_bal && z <= max_withdraw_limit)
        {
            bank_rate = x;
            bank_min_bal = y;
            bank_withdraw_limit = z;
        }
        else
        {
            cout << endl
                 << "Unauthorised limits!!";
        }
    }

    void new_acc()
    {
        A.get_acc();
    }
    bool check()
    {
        if (bank_min_bal < A.check_balance())
            return true;
        return false;
    }
    void display()
    {
        A.display_acc_details();
        cout << endl
             << "Annual interest:" << A.check_balance() * bank_rate / 100;
    }
};

class customer
{
protected:
    string name, phno, dob;

public:
    void get_details()
    {
        cout << endl
             << "Name:";
        cin >> name;
        cout << endl
             << "Phone no:";
        cin >> phno;
        cout << endl
             << "Date of Birth:";
        cin >> dob;
    }
    void display()
    {
        cout << endl
             << "Name of the customer:" << name;
        cout << endl
             << "Phone no of the customer:" << phno;
        cout << endl
             << "DOB of the customer:" << dob;
    }
    void select_bank(string bank)
    {
        if (bank == "SBI")
        {
            SBI acc1;
            acc1.set(5, 4000, 10000);
            acc1.new_acc();
            if (acc1.check())
            {
                display();
                acc1.display();
            }
            else
                cout << "Insufficient balance!!";
        }
        if (bank == "ICICI")
        {
            SBI acc1;
            acc1.set(7, 3000, 15000);
            acc1.new_acc();
            if (acc1.check())
            {
                display();
                acc1.display();
            }
            else
                cout << "Insufficient balance!!";
        }
    }
};

int main()
{
    customer A, B;
    A.get_details();
    A.select_bank("SBI");
    B.get_details();
    B.select_bank("ICICI");
}
