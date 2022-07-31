// John Watson knows of an operation called a right circular rotation on an array of integers. 
// One rotation operation moves the last array element to the first position and shifts all remaining elements right one. 
// To test Sherlock's abilities, Watson provides Sherlock with an array of integers. 
// Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.
// For each array, perform a number of right circular rotations and return the values of the elements at the given indices.


// Right circular array rotation(-)

#include <iostream>
#include <vector>
using namespace std;
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    int a_size=a.size(),q_size=queries.size();
    vector<int> result(queries.size());
    k=k%a_size;
    for(int i=0;i<q_size;i++)
    {
        
        if(queries[i]-k<0)
            result[i]=a[(queries[i]-k)+a_size];
        else
            result[i]= a[queries[i]-k];   
    }
    return result;
}

int main()
{
    int k, n_array, n_queries;
    cin >> n_array >> k >> n_queries;
    vector<int> a(n_array), queries(n_queries);
    for (int i = 0; i < n_array; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n_queries; i++)
    {
        cin>>queries[i];    
    }
    vector<int> result=circularArrayRotation(a, k, queries);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<"\n";
    }

}
