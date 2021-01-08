#include<iostream>
using namespace std;

class shape
{
protected:
    double l, b;
public:
    shape()
    {

    }
    shape(double x, double y)
    {
        l = x;
        b = y;
    }
    void getdata(int x)
    {
        if(x == 2)
        {
            cout << "\nEnter Length :- "; cin >> l;
            cout << "Enter Breadth :- "; cin >> b;
        }
        else{
            cout << "\nEnter Altitude :- "; cin >> l;
            cout << "Enter base :- "; cin >> b;
        }
    }
    virtual void display() = 0;
};
class triangle: public shape
{
    double area;
public:
    triangle(double x, double y ):shape(x, y)
    {
        area = (0.5*l*b);
    }
    void display()
    {
        area = (0.5*l*b);
        cout << "\nAltitude = " << l << endl;
        cout << "Base = " << b << endl;
        cout << "Area of Triangle = " << area << endl;
    }
};
class rectangle: public shape
{
    double area;
public:
    rectangle(double x, double y):shape(x, y)
    {
        area = (l*b);
    }
    void display()
    {
        area = (l*b);
        cout << "\nLength = " << l << endl;
        cout << "Breadth = " << b << endl;
        cout << "Area of Rectangle  = " << area << endl;
    }
};
int main()
{
    int ch;
    double l, b;
    cout << "1 - Calculate area of Triangle " << endl;
    cout << "2 - Calculate area of Rectangle" << endl;
    cin >> ch;
    shape *bptr;
    if(ch == 1)
    {
        cout << "\nEnter Altitude :- "; cin >> l;
        cout << "Enter base :- "; cin >> b;
        triangle obj(l, b);
        bptr = &obj;
        bptr->display();
    }
    else if (ch == 2)
    {
        cout << "\nEnter Length :- "; cin >> l;
        cout << "Enter Breadth :- "; cin >> b;
        rectangle obj(l,b);
        bptr = &obj;
        bptr->display();
    }
    else{cout <<"\nPlease enter a valid input "<< endl; main(); }
    return 0;
}
