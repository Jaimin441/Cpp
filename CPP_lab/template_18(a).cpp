#include<iostream>
using namespace std;
template<class T>
void swaping(T &a, T &b)
{
    cout <<"\nBefore Swapping" << endl;
    cout << "A = " << a << " B = "<< b << endl;
    T temp = a;a = b;   b = temp;
    cout <<"\nAfter Swapping" << endl;
    cout << "A = " << a << " B = "<< b << endl;
}
int main()
{
    int m, n;
    float x,y;
    cout << "Enter two Integer number:- "; cin >> m >> n;
    swaping(m , n);
    cout << "Enter two real number :- "; cin >> x>> y;
    swaping(x, y);
    return 0;
}
