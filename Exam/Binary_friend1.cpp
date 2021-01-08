#include <iostream>
using namespace std;
class vec{
    int v[3];
public:
    vec()
    {
        for(int i =0 ;i< 3; i++)
            v[i] = 0;
    }
    vec(int *x)
    {
        for(int i =0 ;i< 3; i++)
            v[i] = x[i];
    }
    friend vec operator *(int a, vec &v1)
    {
        vec temp;
        for(int i =0 ;i< 3; i++)
        {
            temp.v[i] = a*v1.v[i];
        }
        return temp;
    }
    friend vec operator *(vec &v1, int a)
    {
        vec temp;
        for(int i =0 ;i< 3; i++)
        {
            temp.v[i] = a*v1.v[i];
        }
        return temp;
    }
    friend ostream &operator <<(ostream &o, vec &v1)
    {
        cout <<"\nValues are\n" << endl;
        for(int i = 0;i < 3; i++)
        {
            o << v1.v[i] << endl;
        }
        return o;
    }
    friend istream &operator >> (istream &in,vec &v1)
    {
        for(int i = 0; i< 3; i++)
        {
            cout << "Enter value;- ";
            in >> v1.v[i];
        }
        return in;
    }
};
int x[3] = {1, 2, 3};
int main()
{
    vec v1;
    vec v2 = x;
    cin >> v1;
    cout << v1;
    cout << v2;
    vec p, q;
    p = 3*v1;
    q = v2*3;
    cout << p;
    cout << q;
    return 0;
}
