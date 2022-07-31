#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<string, bool> check;
void rec(string str, int f, int s, int size)
{
    if (s > size)
    {
        return;
    }
    char swap;
    swap = str[s];
    str[s] = str[f];
    str[f] = swap;
    cout<<"after swap:"<<str<<endl;
    if (!check[str])
    {
        check[str] = 1;
        rec(str,0,1, size);
        cout<<"starting with 0 ,1"<<endl;
        while(s<=size)
        {
            // cout<<"f="<<f<<" "<<"s="<<" "<<s<<endl;
            f+=1;
            s+=1;
            cout<<"f="<<f<<" "<<"s="<<" "<<s<<endl;
            rec(str,f,s,size);
        }    
    }
    return;

}
int main()
{
    string str = "abc";
    rec(str, 0, 1, str.size()-1);
    cout<<"\n";
    for (auto itr = check.begin(); itr != check.end(); itr++)
    {
        cout << itr->first << " ";
    }
    cout<<"\n"<<check.size()<<"\n";
}
// abab
// 1(0,1)T   1(0,1)T  1(0,1)f   2(1,2)T    1(0,1)F  2(2,3)f
// baab     abab    baab        aabb       aabb     aabb

// abab
// 2(1,2)
// aabb

//abab      
// 2(2,3)T  1(0,1)T   1(0,1)F  1(3,4)f
// abba    baba     abba

