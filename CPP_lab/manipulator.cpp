#include<iostream>
#include<iomanip>
using namespace std;
ostream &currency(ostream &out)
{
    out << "$";
    out << setiosflags(ios::left);
    out.setf(ios::internal, ios::adjustfield);
    out << setiosflags(ios::showpos);
    out << setfill('-');
    out << setw(10);
    out << setprecision(2);
    out << setiosflags(ios::fixed);
    return out;
}
int main()
{
    double mon;
    cout << "Enter the amount :- ";cin >> mon;

    cout << "\nEntered amount is " << currency << mon << endl;
    return 0;
}
