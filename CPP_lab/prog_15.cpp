#include<iostream>
using namespace std;

class student
{
protected:
    int roll;
    char name[40];
public:
    void getdata()
    {
        cout << "\nEnter ROll number :- ";
        cin >> roll;
        cout << "Enter Name :- ";
        cin >> name;
    }
    void display()
    {
        cout << "\nRoll No. --> " << roll << endl;
        cout << "Name --> " << name << endl;
    }
};
class exam:public student
{

protected:
    int marks[5];
public:
    int getdata();
    void display();
};
int exam::getdata()
{
    int sum = 0;
    student::getdata();
    int i;
    for(i = 0; i < 5; i++)
    {
        cout << "\nEnter marks of Subject " << i+1 << " :- "; cin >> marks[i];
        sum += marks[i];
    }
    return sum;
}
void exam::display()
{
    student::display();
    for(int i = 0; i< 5; i++)
    {
        cout << "\nSubject " << i+1 << " --> " << marks[i];
    }
    cout << endl;
}
class result:public exam
{
    int total;
    double avg;
public:
    void getdata()
    {
        total = exam::getdata();
        avg = total/5.0;
    }
    void display()
    {
        exam::display();
        cout << "\nTotal --> " << total << endl;
        cout << "Average --> " << avg << endl;
    }
};
int main()
{
    result obj;
    obj.getdata();
    cout << "\n<----Displaying Student INFO. ---->" << endl;
    obj.display();
    return 0;
}
