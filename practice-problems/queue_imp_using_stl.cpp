// Queue in Standard Template Library (STL)
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    bool i=1;
    int choice;
    while(i)
    {
        cout<<"\nOperations:\n1.Push\n2.Pop\n3.Front\n4.Back\n5.Size\n6.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int n;
                cout<<"\nEnter a element to push back in array:";
                cin>>n;
                q.push(n);
                break;
            case 2:
                if(!q.empty())
                    q.pop();
                else
                    cout<<"\nStack is empty";    
                break;
            case 3:
                if(!q.empty())
                    cout<<q.front();
                else
                    cout<<"\nStack is empty";    
                break;
            case 4:
                if(!q.empty())
                    cout<<q.back();
                else
                    cout<<"\nStack is empty";    
                break;

            case 5:
                cout<<"\nSize of the stack is "<<q.size();   
                break; 
            case 6:
                i=0;
                break;
            default:
                cout<<"\nInvalid input";
                break;          
        }
    }    


}