#include <iostream>
using namespace std;
class flight
{
public:
    int flightno;
    string source;
    string destination;
    int fare;
    void input()
    {
        cout << "enter flight number:";
        cin >> flightno;
        cout << "enter source of the trip:";
        cin >> source;
        cout << "enter destination of the trip:";
        cin >> destination;
        cout << "enter the fare:";
        cin >> fare;
    }
    void display()
    {
        cout << endl
             << "THE FLIGHT NUMBER:" << this->flightno;
        cout << endl
             << "THE SOURCE:" << this->source;
        cout << endl
             << "THE DESTINATION:" << this->destination;
        cout << endl
             << "THE FARE:" << this->fare;
    }
};
int main()
{
    flight fl1;
    fl1.input();
    fl1.display();
}
