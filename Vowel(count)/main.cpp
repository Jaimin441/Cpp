#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    system("color 1f");
    string line;

    cout << "Please enter your text here. If possible try to write in one line!!!\n" << endl;
    getline(cin, line);

    int siz = line.length();
    char ch[siz+1];
    strcpy(ch, line.c_str()); // GAme changing thing is c_str used to copy a string to char

    int vow[5], conso = 0;
    for(int j = 0; j<5; j++)
        vow[j] = 0;
    for(int i = 0; i< siz; i++)
    {
        switch(ch[i])
        {
            case 'a' : vow[0]++; break;
            case 'e' : vow[1]++; break;
            case 'i' : vow[2]++; break;
            case 'o' : vow[3]++; break;
            case 'u' : vow[4]++; break;
            default : conso++; break;
        }

    }

    cout << "occurence of \nA = " << vow[0] << "\nE = " << vow[1] << endl;
    cout << "I = " << vow[2] << "\nO = " << vow[3] << "\nU = " << vow[4] << endl;
    return 0;
}
