#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsets(vector<int> arr, int i, string comb, map<string, bool> m)
{
    if (i == arr.size())
    {
        return;
    }
    string s = comb + std::to_string(arr[i]) + ",";
    // if (m[s])
    //     continue;
    m[s] = true;
    cout << s << endl;
    subsets(arr, i + 1, s, m);
}

void sub(vector<int> arr, int i, string comb, map<string, bool> m){

    if (i == arr.size())
    {
        return;
    }
    subsets(arr, i + 1,comb, m);

}

int main()
{
    vector<int> nums{1, 2, 4, 4};
    map<string, bool> m;
    subsets(nums, 0, "", m);
}


