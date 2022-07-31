// print the indices of where pattern is present in the text.

#include<iostream>  
#include <bits/stdc++.h>
using namespace std;
void pattern_search(string text,string pat)
{
    int t=text.size(),p=pat.size(),j;
    for(int i=0;i<t;i++)
    {
        for(j=0;j<p;j++)
        {
            if(text[i+j]!=pat[j])
            {
                break;
            }
        }
        if(j==p)
        {
            cout<<"Pattern found at index-"<<i<<"\n";
        }
    }


}
int main()
{
    string text,pat;
    cin>>text;
    cin>>pat;
    pattern_search(text,pat);

}