#include<iostream>
#include "sll.h"
using namespace std;
int main(){
    sll s;
    char c;
    while(true){
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Front\n4.Empty\n5.Exit\n";
        cout<<"Enter your choice(1/2/3/4/5):";
        cin>>c;
        if(c=='1'){
			int data;
			cout<<"Enter data to push into queue:";
			cin>>data;
			s.push_back(data);
        }
        else if(c=='2'){
            cout<<"Dequeued element:"<<s.delete_front();
        }
	    else if(c=='3'){
	         cout<<"Front element:"<<s.front();
	    }
	    else if(c=='4'){
	         cout<<"Empty:"<<s.empty();
	    }
        else if(c=='5'){
            break;
        }
        else{
            cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}
