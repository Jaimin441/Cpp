#include <stdio.h>
#include <conio.h>

int sum(int , int);

int main()
{
    int a, b;
    a = 5;
    b = 10;
    printf("%d", sum(a, b));
    return 0;
}

int sum(int x, int y)
{
    float ans = x / y;
    return ans;
}
