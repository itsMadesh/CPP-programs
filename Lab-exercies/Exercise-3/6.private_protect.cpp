#include <iostream>
using namespace std;
class Paint
{
protected:
    string name;
};
class PaintColor : public Paint
{
private:
    string color;

public:
    PaintColor(string name, string color)
    {
        this->color = color;
        this->name = name;
    }
    friend void display(PaintColor p);
};
void display(PaintColor p)
{
    cout << "Paint name:" << p.name << endl;
    cout << "Color:" << p.color << endl;
}
int main()
{
    string name, color;
    cout << "Enter Paint name,color:";
    cin >> name >> color;
    PaintColor p(name, color);
    display(p);
    return 0;
}
