#include <iostream>
using namespace std;
class Queue
{
private:
    int arr[10];
    int size;
    int top;

public:
    Queue()
    {
        size = 10;
        top = -1;
    }
    void enqueue(int data)
    {
        if (size == top + 1)
        {
            cout << "Queue is Full";
        }
        top += 1;
        arr[top] = data;
    }
    int dequeue()
    {
        int value;
        if (top == -1)
        {
            cout << "Queue is empty";
        }
        value = arr[0];
        int i = 0;
        while (i != top)
        {
            arr[i] = arr[i + 1];
            i++;
        }
        arr[top] = 0;
        top--;
        return value;
    }
    int front()
    {
        if (top == -1)
        {
            cout << "Queue is empty";
            return -1;
        }
        return arr[0];
    }
    string empty()
    {
        return top == -1 ? "True" : "False";
    }
};
int main()
{
    Queue q;
    char c;
    while (true)
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Front\n4.Empty\n5.Exit\n";
        cout << "Enter your choice(1/2/3/4/5):";
        cin >> c;
        if (c == '1')
        {
            int data;
            cout << "Enter data to push into queue:";
            cin >> data;
            q.enqueue(data);
        }
        else if (c == '2')
        {
            cout << "Dequeued element:" << q.dequeue();
        }
        else if (c == '3')
        {
            cout << "Front element:" << q.front();
        }
        else if (c == '4')
        {
            cout << "Empty:" << q.empty();
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