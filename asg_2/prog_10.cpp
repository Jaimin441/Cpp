#include<iostream >
using namespace std;

double avg()
{
    int stu[100], no_stu, sum = 0, cnt = 0;
    double avg;
    cout << "Enter number of students:- "; cin >> no_stu;
    if(no_stu != 0)
    {
        cout << "Enter -1 when done \n" << endl;
        while(1)
        {
            cout << "Enter marks of student " << cnt+1 << " :- "; cin >> stu[cnt];
            if(stu[cnt] > 100){throw -1;}
            if(stu[cnt] == -1){break;}
            sum = sum + stu[cnt];
            cnt++;
            if(cnt > no_stu){throw no_stu;}
        }
    }
    else{
        throw 1.0;
    }
    avg = sum / double(no_stu);
    return avg;
}
int main()
{
    double answer;
    try
    {
        answer = avg();
        cout << "\nAverage is " << answer << endl;
    }
    catch(int x)
    {
        if(x < 0)
        {
            cout << "\nCannot enter marks more than 100 !!" << endl;
        }
        else
        {
                cout << "\nArray Index out of bound " << endl;
                cout << "\nEntering more than " << x << " student's marks. " << endl;
        }
    }
    catch (double i)
    {
        cout << "\nCannot divide by zero " << endl;
        cout << "\nMinimum of 1 student marks must be entered " << endl;
    }
    return 0;
}
