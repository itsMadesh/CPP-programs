#include <iostream>
#include "sll.h"
using namespace std;
int main()
{
    sll s;
    char c;
    while (true)
    {
        cout << "\n1.push\n2.pop\n3.Top\n4.Empty\n5.Exit\n";
        cout << "Enter your choice(1/2/3/4/5):";
        cin >> c;
        if (c == '1')
        {
            int data;
            cout << "Enter data to push into array:";
            cin >> data;
            s.push_back(data);
        }
        else if (c == '2')
        {
            cout << "popped element:" << s.delete_back();
        }
        else if (c == '3')
        {
            cout << "Top element:" << s.top();
        }
        else if (c == '4')
        {
            cout << "Empty:" << s.empty();
        }
        else if (c == '5')
        {
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
