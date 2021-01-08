#include<iostream>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:- "; cin >> str;
    stringstream val(str);
    int i;
    val >> i;
    cout << "\nInteger i = " << i+1 << endl;
    return 0;
}
