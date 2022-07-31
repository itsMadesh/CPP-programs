#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int> a;
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
                a.push(n);
                break;
            case 2:
                if(!a.empty())
                    a.pop();
                else
                    cout<<"\nStack is empty";    
                break;
            case 3:
                if(!a.empty())
                    cout<<a.top();
                else
                    cout<<"\nStack is empty";    
                break;
            case 4:
                cout<<"\nSize of the stack is "<<a.size();    
            case 5:
                i=0;
                break;
            default:
                cout<<"\nInvalid input";
                break;          
        }
    }
}