#include<iostream>
using namespace std;
struct stack
{
    int size=0;
    int a[100];
    void display()
    {
        cout<<"\nArray:";
        for(int i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    void push(int n)
    {
        size+=1;
        a[size-1]=n;
        display();
    }
    void pop()
    {
        if(size)
        {
            size-=1;
            display();
        }    
        else
        {
            cout<<"Array does not have elements";  
        }    
    }
    void peek()
    {   if(size)
            cout<<"\npeek:"<<a[size-1];
        else
            cout<<"Array does not have elements";        
    }
};
int main()
{
    int n,i=1,w_s,choice;
    cout<<"\nEnter Number of stacks:";
    cin>>n;
    stack stacks[n];
    while(i)
    {
        cout<<"\nOperations:\n1.Push\n2.Pop\n3.Peek\n4.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        cout<<"\nEnter which stack:";
        cin>>w_s;
        switch(choice)
        {
            case 1:
                int n;
                cout<<"\nEnter a element to push back in array:";
                cin>>n;
                stacks[w_s-1].push(n);
                break;
            case 2:
                stacks[w_s-1].pop();
                break;
            case 3:
                stacks[w_s-1].peek();
                break;
            case 4:
                i=0;
                break;
            default:
                cout<<"Invalid input";
                break;          
        }
    }
    
}  