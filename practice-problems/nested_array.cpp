#include<iostream>
using namespace std;
#include<vector>
vector<int> arr1;
int a[16][4],j=0;
void subset(int arr[],int start,int size)
{

    if(start<size)
    {
        arr1.push_back(arr[start]);
        subset(arr,start+1,size);
        arr1.pop_back();
        subset(arr,start+1,size);        
    }
    else{
        for(int i=0;i<arr1.size();i++)
        {
            a[j][i]=arr1[i];
        }
        j++;   
    }

}
int main()
{
    int arr[]={1,2,3,4},sum,k=11;
    for(int i=0;i<1;i++)
    {
        subset(arr,i,4);
        cout<<"\n";
    }
    for(int i=0;i<16;i++)
    {
        sum=0;
        for(int j=0;j<sizeof(a[i])/sizeof(int);j++)
        {
            sum+=a[i][j];
        }
        if(sum==k)
        {
            return true;
        }
    }
    return false;
        
}