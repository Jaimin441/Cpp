#include <iostream>
using namespace std;
template<class T>
class temp
{
    T a, b;
public:
    temp(T x, T y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        T max;
        (a>b) ?max = a: max = b;
        cout << "\nMAX = " << max << endl;
    }
};
void fun(int a, int b, float x, float y)
{
    cout << "\nComparing Integer values " << endl;
    temp<int> obj(a, b);
    obj.display();
    cout << "\nComparing Float values " << endl;
    temp <float> obj2(x, y);
    obj2.display();
}
int main()
{
    int a, b;
    float x,y;
    cout <<"Enter Integer values for A & B :- "; cin >> a >> b;
    cout <<"Enter Float values for X & Y :- " ; cin >> x >> y;
    fun(a,b, x, y);
    return 0;
}
