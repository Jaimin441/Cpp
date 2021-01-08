#include <iostream>

using namespace std;

class conts{
    int a;
public:
    void getdata()
    {
        cout << "Enter value --> ";
        cin >> a;
    }
    conts(){ a = 0;}
    conts( conts &c)
    {
        int temp = c.a;
        //cout << "Value of calling obj before c.a = " << c.a << endl;
        temp++;
        a = temp;
        //cout << "Value of calling obj after c.a = " << c.a << endl;
    }
    void show(){cout << "\nVALUE = " << a << endl;}
};
int main()
{
    conts c1;
    c1.getdata();
    conts c2(c1);
    conts c3(c2);
    conts c4 = c3;//it calls copy constructor
    conts c5;
    c5 = conts(c4);
    cout << "Value of C1 = "; c1.show();
    cout << "Value of C2 = "; c2.show();
    cout << "Value of C3 = "; c3.show();
    cout << "Value of C4 = "; c4.show();
    cout << "Value of C5 = "; c5.show();
    return 0;
}
