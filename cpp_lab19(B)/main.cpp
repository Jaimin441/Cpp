#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string line;
    char ch;
    ofstream file1("file1.txt");
    cout << "\nEnter the text below" << endl;
    while(1)
    {
        getline(cin, line);
        file1 << line << endl;
        cout << "\nWant to continue:- "; cin >> ch;
        if(ch == 'n'){break;}
        cin.get();
    }
    file1.close();
    cout << "\nCopying the following content" << endl;
    ifstream file3("file1.txt");
    ofstream file2("file2.txt");
    while(!file3.eof())
    {
        getline(file3, line);
        file2 << line << endl;
        cout << line << endl;
    }
    file3.close();
    file2.close();
    return 0;
}
