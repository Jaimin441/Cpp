#include <iostream>
#include <fstream>
using namespace std;

struct customer{
    int id, nuid, account;
    string name;
};
int main()
{
    customer cust[100];
    int i = 0, id, nuid,  account;
    string name;
    ifstream file("me.txt");

    while(file >> id >>  name >> account)
    {
        cout <<  id << " " <<  name  << " " << account<< endl;
        i++;
    }

    //nuid >> account    nuid << " " <<  account << " " <<
    /*for(int j; j < i; j++)
        cout << cust[j].id << " " << cust[j].nuid << " " << cust[j].account<< endl; */
    return 0;
}
