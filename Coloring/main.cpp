#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
    //SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN |BACKGROUND_BLUE);
    system("color 7d");
    cout << "Hello World!!" << endl;
    cin.ignore();
    return 0;
}
