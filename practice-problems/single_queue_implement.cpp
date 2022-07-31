#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> a;
    int choice,i=1;
    while(i)
    {
        cout<<"\nOperations:\n1.Push\n2.Pop\n3.Rear\n4.Front\n5.Display-array\n6.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                int n;
                cout<<"\nEnter a element to push back in array:";
                cin>>n;
                a.push_back(n);
                break;
            case 2:
                if(a.size())
                    a.erase(a.begin());
                else
                    cout<<"\nArray is empty"; 
                    break; 
            case 3:
                if(a.size())
                    cout<<"\nBack element:"<<a[a.size()-1];
                else
                    cout<<"\nArray is empty";    
                break;
            case 4:
                if(a.size())
                    cout<<"\nFront element:"<<a[0];
                else    
                    cout<<"\nArray is empty"; 
                break;
            case 5:
                if(a.size())
                {
                    cout<<"\n";
                    for(int j=0;j<a.size();j++)
                        cout<<a[j]<<" ";
                }        
                else  
                {  
                    cout<<"\nArray is empty"; 
                }
                break;  
            case 6:
                i=0;
                break;          
            default:
                cout<<"Invalid input";
                break; 
        }        
    }
}