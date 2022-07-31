#include <iostream>
using namespace std;
template <typename T>
void lisearch(T arr[], T key, int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "\nItem found at position of the list = " << i + 1 << "\n";
        }
        else if (flag != 1)
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "\nItem not found in the list\n";
    }
}
template <typename T>
int bisearch(T arr[], T key, int l, int r)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
        {
            cout << "\nItem found at position of the list = " << mid + 1 << "\n";
            return 1;
        }
        else if (arr[mid] > key)
            return bisearch(arr, key, l, mid - 1);
        else
            return bisearch(arr, key, mid + 1, r);
    }
    cout << "\nItem not found in the list\n";
    return -1;
}
int main()
{
    int n;
    cout << "Enter array size:";
    cin >> n;
    int arr[n], key;
    cout << "Enter any " << n << " elements into the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be found:";
    cin >> key;
    cout << "By linear search:";
    lisearch(arr, key, n);
    cout << "By binary search:";
    bisearch(arr, key, 0, n - 1);
    return 0;
}
