#include <iostream>

using namespace std;

double avg()
{
    int no_sub, marks[6], cnt = 0, sum = 0;
    double avg;
    cout << "Enter Number of subjects :- "; cin >> no_sub;
    if(no_sub != 0)
    {
        cout << "Enter '-1' when done!!" << endl;
        while(1)
        {
            cout << "Enter Marks of Subject " << cnt+1 <<" :-"; cin >> marks[cnt];
            if(marks[cnt] == -1){break;}
            else
            {
                sum = sum + marks[cnt];
            }
            if(cnt > no_sub)
            {
                throw cnt;
            }
            cnt++;
        }
    }
    else
    {
        throw 1.0;
    }
    avg = sum/no_sub;
    cout << "\nAverage = " << avg << endl;
    return 0;

}
int main()
{
    try
    {
        avg();
    }
    catch (int cnt)
    {
        cout << "\nArray Index out of Bound " << endl;
        cout << "\nEntering Marks of Subject more than entered !!" << endl;
    }
    catch (double x)
    {
        cout << "\nCannot Divide number by 0 " << endl;
        cout << "\nMinimum of 1 subject marks should be entered " << endl ;
    }
    return 0;
}
