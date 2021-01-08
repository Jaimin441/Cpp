#include <iostream>

using namespace std;

int copy_non_rpt(int a[], int b[], int siz)
{
    int i, j, cnt = 0, sizb, flag = 0;
    for(i = 0; i < siz ; i++)
    {
        for(j = i+1; j< siz ; j++)
        {
            if(a[i] == a[j])
            {
                cnt++;
            }
        }
    }
    sizb = siz - cnt;
    cnt = 0;
    for(i = 0 ;i < siz; i++)
    {
        flag = 0;
        for(j = i; j>=0; j--)
        {
            if(a[i] == b[i]){flag = 1; continue;}
        }
        if(flag == 0)
        {
            b[cnt] = a[i];
            cnt++;
        }
    }
    return sizb;
}
int main()
{
    int a[100], b[100], siza, sizb, i, max, last;
    cout << "Enter Number of elements :- "; cin >> siza;
    for(i = 0 ; i< siza; i++)
    {
        cout << "Enter " << i+1 << " number :- "; cin >> a[i];
    }
    sizb = copy_non_rpt(a, b, siza);
    last = b[sizb-1];
    for(i = sizb; i< siza; i++)
    {
        last++;;
        b[i] = last;
    }
    cout << "\nPrinting B "<< endl;
    for(i = 0; i< siza; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}
