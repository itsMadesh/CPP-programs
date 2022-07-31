#include<iostream>
#include<string.h>
using namespace std;
void combination(int i,int l,string s,string ans)
{
    if(l<ans.length())
    {
        cout<<"Ans="<<ans<<"\n";
        return ;
    }
    while(ans!="c"){
        combination((i+1)%l,l,s,ans+s[i]);
        cout<<ans<<"\n";
    }
    // combination((i+2)%l,l,s,ans+s[i]);
}
int main(){
    string exp,ans="";
    cout<<"Enter the str:";
    cin>>exp;
    combination(-1,exp.length(),exp,ans);
}