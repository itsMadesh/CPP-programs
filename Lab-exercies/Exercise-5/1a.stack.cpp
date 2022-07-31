#include <iostream>
using namespace std;
class Stack
{
private:
    int arr[10], itop, max;

public:
    Stack()
    {
        itop = -1;
        max = 10;
    }
    void push(int data)
    {
        if (itop == max - 1)
        {
            cout << "Stack is full";
        }
        else
        {
            itop += 1;
            arr[itop] = data;
        }
    }
    int pop()
    {
        if (itop == -1)
        {
            cout << "Stack is Empty";
            return -1;
        }
        else
        {
            itop -= 1;
            return arr[itop + 1];
        }
    }
    int top()
    {
        if (itop == -1)
        {
            cout << "Stack is Empty";
            return -1;
        }
        return arr[itop];
    }
    string empty()
    {
        return itop == -1 ? "True" : "False";
    }
};
int main()
{
    Stack s;
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
            s.push(data);
        }
        else if (c == '2')
        {
            cout << "popped element:" << s.pop();
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
