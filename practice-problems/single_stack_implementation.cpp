#include<iostream>
using namespace std;
#include<vector>
int arr[100000],size=0;
void display()
{
    cout<<"\nArray:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void push(int n)
{
    size+=1;
    arr[size-1]=n;
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
        cout<<"\npeek:"<<arr[size-1];
    else
        cout<<"Array does not have elements";        
}
int main()
{
    bool i=1;
    int choice;
    while(i)
    {
        cout<<"\nOperations:\n1.Push\n2.Pop\n3.Peek\n4.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int n;
                cout<<"\nEnter a element to push back in array:";
                cin>>n;
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
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