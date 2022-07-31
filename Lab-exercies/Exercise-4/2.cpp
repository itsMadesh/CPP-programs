// 2. Create two classes named Mammals and MarineAnimals. Create another
// class named BlueWhale which inherits both the above classes. Now, create a
// function in each of these classes which prints "I am mammal", "I am a marine
// animal" and "I belong to both the categories: Mammals as well as Marine
// Animals" respectively. Now, create an object for each of the above class and
// try calling
// 1 - function of Mammals by the object of Mammal
// 2 - function of MarineAnimal by the object of MarineAnimal
// 3 - function of BlueWhale by the object of BlueWhale
// 4 - function of each of its parent by the object of BlueWhale

#include <iostream>
using namespace std;
class Mammals
{
public:
    void print_m()
    {
        cout << "I am mammal\n";
    }
};

class MarineAnimals
{
public:
    void print_ma()
    {
        cout << "I am a marine animal\n";
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void print_bw()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals\n";
    }
};

int main()
{
    Mammals m;
    m.print_m();
    MarineAnimals ma;
    ma.print_ma();
    BlueWhale bw;
    bw.print_bw();
    bw.print_m();
    bw.print_ma();
    return 0;
}