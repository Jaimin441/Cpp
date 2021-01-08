#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch;
    int cnt_wrd = 0, cnt_line = 0;
    cout << "Enter '*' when done " << endl;
    while(1)
    {
        cin.get(ch);
        switch(ch)
        {
            case ' ': cnt_wrd++;break;
            case '\n': cnt_wrd++; cnt_line++; break;
            default: cout << "";
        }
        if(ch == '*'){break;}
    }
    cout << setiosflags(ios::left) << "\nNumber of Words = " << setw(5)
         << setiosflags(ios::right)<< setfill('-')<< cnt_wrd << endl;
    cout << setiosflags(ios::left )<< "\nNumber of line = "<< setw(5)
         << setiosflags(ios::right)<< setfill('-')<< cnt_line << endl;
    return 0;
}
