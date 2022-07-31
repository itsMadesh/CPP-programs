#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,quo,cal,count=0;
    cin>>n;
    vector<int> fact;
    auto j=fact.begin();
    fact.push_back(1);
    for(int i=n;i>=2;i--)
    {
        quo=0;
        for(j=fact.begin();j!=fact.end();++j)
        {
            cal=(*j)*i+quo;
            quo=0;
            if(cal>9)
            {
                *j=cal%10;
                quo=cal/10;
            }
            else {
              *j=cal;
            }   
        }
        if((*(j-1))!=(*(j-1)+quo))
        {
            if(quo>9)
            {
                while(quo>9)
                {
                    count++;
                    fact.push_back(quo%10);
                    quo/=10;  
                }
                fact.push_back(quo);
            }
            else
            {
                fact.push_back(quo);
            }
        } 
  
    }      
    for(auto i=(fact.end()-1);i>=fact.begin();--i)
    {
        cout<<*i;
    }    
    
}