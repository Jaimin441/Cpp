#include <iostream>
#include <string>

using namespace std;

int find_class()
{
    string ip;
    cout << "\nEnter IP Address:- ";
    cin >> ip;
    cout << "\nEntered IP Address is :- " << ip << endl;
    ip.append(".");
    int n1, n2, fin;
    n1 = 0; //Number of number before dot
    n2 = 0; //Number of zeros
    fin = 0; //class recognizer
    for(int i = 0; i < ip.length(); i++)
    {
        if(ip[i] == '.')
        {
            if(n1 == n2){fin++;}
            n1 = 0;
            n2 = 0;
        }
        else if(ip[i] != '.'){n1++;}
        else{continue;}
        if(ip[i] == '0') { n2++;}
    }
    switch(fin)
    {
        case 3 : cout << "\nA Class IP Address" << endl; return 0; break;
        case 2 : cout << "\nB Class IP Address" << endl; return 0; break;
        case 1 : cout << "\nC Class IP Address" << endl; return 0; break;
        default : cout << "\n\nEnter a valid IP Address" << endl; find_class(); break;
    }
}
int main()
{
    find_class();
    return 0;
}
