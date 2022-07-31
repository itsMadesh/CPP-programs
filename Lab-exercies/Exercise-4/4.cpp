#include <iostream>
#include <string>
using namespace std;
class vehicle
{
public:
    int mileage, price;
    void get_v_details()
    {
        cout << endl
             << "Mileage:";
        cin >> mileage;
        cout << endl
             << "Price:";
        cin >> price;
    }
};

class car : public vehicle
{
public:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;
    void get_c_details()
    {
        cout << endl
             << "Ownership cost:";
        cin >> ownership_cost;
        cout << endl
             << "Warranty in yrs:";
        cin >> warranty;
        cout << endl
             << "seating capacity:";
        cin >> seating_capacity;
        cout << endl
             << "Fuel type:";
        cin >> fuel_type;
        get_v_details();
    }
};

class bike : public vehicle
{
public:
    int no_of_cylinders;
    int no_of_gears;
    string cooling_type;
    string wheel_type;
    int fuel_tank_size;

    void get_b_details()
    {
        cout << endl
             << "Cylinder number:";
        cin >> no_of_cylinders;
        cout << endl
             << "Gear number:";
        cin >> no_of_gears;
        cout << endl
             << "Cooling type:";
        cin >> cooling_type;
        cout << endl
             << "Wheel type:";
        cin >> wheel_type;
        cout << endl
             << "Fuel tank size:";
        cin >> fuel_tank_size;
        get_v_details();
    }
};

class Audi : public car
{
    string model;

public:
    void get_details()
    {
        cout << "Audi" << endl;
        get_c_details();
        cout << endl
             << "Model:";
        cin >> model;
    }
    void model_details()
    {
        cout << "\nThe details of Audi car is : ";
        cout << "\nThe millage is : " << mileage;
        cout << "\nThe price is : " << price;
        cout << "\nThe ownership cost is : " << ownership_cost;
        cout << "\nThe waranty is for " << warranty << " years";
        cout << "\nThe seating capacity is : " << seating_capacity;
        cout << "\nThe fuel type is : " << fuel_type;
        cout << "\nThe model is : " << model << "\n";
    }
};
class Ford : public car
{
    string model;

public:
    void get_details()
    {
        cout << "Ford" << endl;
        get_c_details();
        cout << endl
             << "Model:";
        cin >> model;
    }
    void model_details()
    {
        cout << "\nThe details of Ford car is : ";
        cout << "\nThe millage is : " << mileage;
        cout << "\nThe price is : " << price;
        cout << "\nThe ownership cost is : " << ownership_cost;
        cout << "\nThe waranty is for " << warranty << " years";
        cout << "\nThe seating capacity is : " << seating_capacity;
        cout << "\nThe fuel type is : " << fuel_type;
        cout << "\nThe model is : " << model << "\n";
    }
};
class Bajaj : public bike
{
    string model;

public:
    void get_details()
    {
        cout << "Bajaj" << endl;
        get_b_details();
        cout << endl
             << "Model:";
        cin >> model;
    }
    void model_details()
    {
        cout << "\nThe details of Bajaj bike is : ";
        cout << "\nThe millage is : " << mileage;
        cout << "\nThe price is : " << price;
        cout << "\nThe no of cylinders is : " << no_of_cylinders;
        cout << "\nThe no of gears is : " << no_of_gears;
        cout << "\nThe cooling type is : " << cooling_type;
        cout << "\nThe wheel type is : " << wheel_type;
        cout << "\nThe fuel tank size is : " << fuel_tank_size << " inches";
        cout << "\nThe model is : " << model << "\n";
    }
};
class TVS : public bike
{
    string model;

public:
    void get_details()
    {
        cout << "TVS" << endl;
        get_b_details();
        cout << endl
             << "Model:";
        cin >> model;
    }
    void model_details()
    {
        cout << "\nThe details of TVS bike is : ";
        cout << "\nThe millage is : " << mileage;
        cout << "\nThe price is : " << price;
        cout << "\nThe no of cylinders is : " << no_of_cylinders;
        cout << "\nThe no of gears is : " << no_of_gears;
        cout << "\nThe cooling type is : " << cooling_type;
        cout << "\nThe wheel type is : " << wheel_type;
        cout << "\nThe fuel tank size is : " << fuel_tank_size << " inches";
        cout << "\nThe model is : " << model << "\n";
    }
};

int main()
{
    Audi a;
    a.get_details();
    Ford f;
    f.get_details();
    Bajaj b;
    b.get_details();
    TVS t;
    t.get_details();

    a.model_details();
    f.model_details();
    b.model_details();
    t.model_details();
}
