#include<iostream>
using namespace std;

template<typename T>
void sort(T arr[],int size){
    T temp;
    int j;
    for(int i=1;i<size;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

}
template<typename T>
void input_arr(T arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
	}
}
template<typename T>
void print_arr(T arr[],int size){
    cout<<"After sorted:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
	}
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int al[n];
    float bl[n];
    char cl[n];
    cout<<"Enter any "<<n<<" integers:";
    input_arr(al,n);
    sort(al,n);
    print_arr(al,n);
    cout<<"Enter any "<<n<<" floating point numbers:";
    input_arr(bl,n);
    sort(bl,n);
    print_arr(bl,n);
    cout<<"Enter any "<<n<<" chars:";
    input_arr(cl,n);
    sort(cl,n);
    print_arr(cl,n);
    return 0;
}
