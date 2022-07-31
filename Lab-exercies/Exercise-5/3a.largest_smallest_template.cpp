#include <iostream>
using namespace std;

template <typename T>
void min_max(T arr[], int size)
{
    T min = arr[0];
    T max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Largest:" << max << endl;
    cout << "Smallest:" << min << endl;
}
template <typename T>
void input_arr(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter size of the array:";
    cin >> n;
    int al[n];
    float bl[n];
    char cl[n];
    cout << "Enter any " << n << " integers:";
    input_arr(al, n);
    min_max(al, n);
    cout << "Enter any " << n << " floating point numbers:";
    input_arr(bl, n);
    min_max(bl, n);
    cout << "Enter any " << n << " chars:";
    input_arr(cl, n);
    min_max(cl, n);
    return 0;
}
