#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class operate{
    char *str;
    int num;
public:
    friend istream &operator >>(istream &in, operate &o)
    {
        cout << "Enter Number:- ";
        in >> o.num;
        cout << "Enter String:- ";
        in >> o.str;
        return in;
    }
    friend ostream &operator <<(ostream &out, operate &o )
    {
        cout << "\nValue = " << o.num << endl;
        cout << "String = " << o.str << endl;
        return out;
    }
friend int operator <=(operate &o1, operate&o2)
    {
        if(o1.len <= o2.len){ return 1;}
        else {return 0;}
    }

};
int main()
{
    operate o1, o2;
    cin >> o1;
    cout << o1;

    return 0;
}
