#include <iostream>
#include <cmath>

using namespace std;
void d_o();

void d_b(int num);
int main()
{
    d_o();
    return 0;
}

void d_o()
{
    int n, count = 0, i, num[20], sum = 0;
    cout << "Enter Number:- ";
    cin >> n;
    for(i = 0; n != 0; i++)
    {
        num[i] = fmod(n, 8);
        n = n/8;
        count++;
    }
    cout << "\n\nOctal Number is" << endl;
    for(i = (count-1); i >=0 ; i--)
    {
        cout << num[i] << " ";
        sum = sum*10 + num[i];
    }
    cout << "\nSUM = " << sum << endl;
    d_b(sum);
}

void d_b(int num)
{
    int n[20], fnum = 0, i, count = 0;

}
