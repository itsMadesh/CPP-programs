#include<iostream>
#include <cmath>
using namespace std;

int main() {
    int n,t1,t2,r1,r2,re1,re2;
    
    cin>>n;
    while(n){
        cin>>t1>>t2>>r1>>r2;
        re1=pow(t1,2)%pow(r1,3);
        re2=pow(t2,2)%pow(r2,3);
        cout<<re1<<" "<<re2;
        if(re1==re2)
        {
            cout<<"yes";
        }
        else{
            cout<<"No";
        }
    }
}
