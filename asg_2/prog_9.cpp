#include<iostream>
using namespace std;
class vehicle
{
protected:
    int year;
    double price;
public:
    void getdata()
    {
            cout << "Enter Years of Manufacture:- "; cin >> year;
            cout << "Enter price :- "; cin >> price;
    }
    void putdata()
    {
            cout << "Year of Manufacture --> " << year << endl;
            cout << "Price = $"<<price << endl;
    }
};
class bus:public vehicle
{
    int seat_cap;
public:
    void getdata()
    {
        vehicle::getdata();
        cout << "Enter Seating Capacity :- "; cin >> seat_cap;
    }
    void putdata()
    {
        vehicle::putdata();
        cout << "Seating capacity = " << seat_cap << endl;
    }
};
class truck:public vehicle
{
    int load_cap;
public:
    void getdata()
    {
        vehicle::getdata();
        cout << "Enter the loading capacity:- "; cin >> load_cap;
    }
    void putdata()
    {
        vehicle::putdata();
        cout << "Load Capacity:- " << load_cap<<endl;
    }
};
int main()
{
    int ch;
    cout << "Enter\n1 - for bus \n2 - Truck -- ";
    cin >> ch;
    if(ch == 1)
    {
        bus bobj;
        bobj.getdata();
        bobj.putdata();
    }
    else if(ch == 2)
    {
        truck tobj;
        tobj.getdata();
        tobj.putdata();
    }
    else{cout << "Pleas enter a valid input !!!" <<endl;}
    return 0;
}
