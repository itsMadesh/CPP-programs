// #include <iostream>
// using namespace std;
// class Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing shape" << endl;
//     }
//     void erase()
//     {
//         cout << "Drawing shape" << endl;
//     }
// };
// class Circle : public Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing circle" << endl;
//     }
//     void erase()
//     {
//         cout << "Drawing circle" << endl;
//     }
// };

// class Square : public Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing square" << endl;
//     }
//     void erase()
//     {
//         cout << "Erasing square" << endl;
//     }
// };
// class Triangle : public Shape
// {
// public:
//     void draw()
//     {
//         cout << "Drawing triangle" << endl;
//     }
//     void erase()
//     {
//         cout << "Erasing triangle" << endl;
//     }
// };
// int main()
// {
//     Circle c;
//     Square s;
//     Triangle t;
//     Shape sh;
//     c.draw();
//     s.draw();
//     t.draw();
//     sh.draw();
//     c.erase();
//     s.erase();
//     t.erase();
//     sh.erase();
//     return 0;
// }

#include <iostream>
using namespace std;

class shape
{
protected:
    int edge, height;

public:
    shape(int x, int y)
    {
        edge = x;
        height = y;
    }
};

class circle : public shape
{
public:
    circle(int x, int y) : shape(x, y)
    {
        edge = x;
        height = y;
    }
    void draw()
    {
        cout << "\nCircle of diameter " << height << " is drawn";
    }
    void erase()
    {
        cout << "\nCircle is erased";
    }
};

class square : public shape
{
public:
    square(int x, int y) : shape(x, y)
    {
        edge = x;
        height = y;
    }
    void draw()
    {
        cout << "\nSquare of height " << height << " and edge " << edge << " is drawn";
    }
    void erase()
    {
        cout << "\nSquare is erased";
    }
};

class triangle : public shape
{
public:
    triangle(int x, int y) : shape(x, y)
    {
        edge = x;
        height = y;
    }
    void draw()
    {
        cout << "\nTriangle of height " << height << " and edge " << edge << " is drawn";
    }
    void erase()
    {

        cout << "\nSquare is erased";
    }
};

int main()
{
    int ce, ch, se, sh, te, th;
    cout << "Enter circle edge and height:";
    cin >> ce >> ch;
    cout << "Enter square edge and height:";
    cin >> se >> sh;
    cout << "Enter triangle edge and height:";
    cin >> te >> th;
    circle c(ce, ch);
    c.draw();
    c.erase();
    square s(se, sh);
    s.draw();
    s.erase();
    triangle t(te, th);
    t.draw();
    t.erase();
}
