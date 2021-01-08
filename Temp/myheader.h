#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED
#include <iostream>
using namespace std;
template<class g=int>
class funcs
{
    g a, b;
public:
    g add(g x, g y)
    {
        a = x,
        b = y;
        return a+b;
    }
    g sub(g x, g y)
    {
        a = x;
        b = y;
        return a-b;
    }
    g mul(g x, g y)
    {
        a = x;
        b = y;
        return a*b;
    }
    g div(g x, g y)
    {
        a = x;
        b = y;
        return a/b;
    }
};

#endif // MYHEADER_H_INCLUDED
