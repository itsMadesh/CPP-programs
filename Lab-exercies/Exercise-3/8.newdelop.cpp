#include <iostream>
using namespace std;

class temp
{
    int a;

public:
    temp()
    {
        cout<<"\nEnter value for a:";
        cin>>a;
    }
    void display()
    {
        cout << "A: " << a << endl;
    }
    void *operator new(size_t objSize)
    {
        cout << "Allocated" << endl;
        return malloc(objSize);
    }
    void operator delete(void *ptr)
    {
        cout << "Deallocated" << endl;
        free(ptr);
    }
};

int main()
{

    temp *obj = new temp();
    obj->display();
    delete obj;
    return 0;
}
