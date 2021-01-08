#include<iostream>
using namespace std;
class test
{
public:
    test(){ cout << "Constructor called" << endl;}
};
int main()
{
    test t1, *t2;
    return 0;
}
