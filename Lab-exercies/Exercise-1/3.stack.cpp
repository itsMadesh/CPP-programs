#include <iostream>
using namespace std;

class Stack
{
private:
    int n;
    int top;
    int *arr;

public:
    Stack()
    {
        cout << "Enter size of the array:";
        cin >> n;
        arr = new int[n];
        top = -1;
    }
    void push(int value)
    {
        if (top == n - 1)
        {
            cout << "stack is overflow\n";
        }
        else
        {
            ++top;
            arr[top] = value;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow";
            return -1;
        }
        int pop_value = arr[top];
        arr[top] = 0;
        --top;
        return pop_value;
    }
    int isempty()
    {
        return top != -1 ? false : true;
    }
    int top_value()
    {
        if (top == -1)
        {
            cout << "stack is underflow";
            return -1;
        }
        return arr[top];
    }
};

int main()
{
    Stack s1;
    while (true)
    {
        cout << "\nOperations:\n1.Push\n2.Pop\n3.Top\n4.Isempty\n5.Exit\n";
        int choice;
        cout << "Enyter your choice:";
        cin >> choice;
        if (choice == 1)
        {
            int a;
            cout << "\nEnter a value to push into the stack:";
            cin >> a;
            s1.push(a);
        }
        else if (choice == 2)
        {
            cout << "\npopped value is " << s1.pop();
        }
        else if (choice == 3)
        {
            cout << "\nTop value is " << s1.top_value();
        }
        else if (choice == 4)
        {
            if (s1.isempty() == 1)
            {
                cout << "\nStack is empty";
            }
            else
            {
                cout << "\nStack is not empty";
            }
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            cout << "\nInvalid choice";
        }
    }
    return 0;
}