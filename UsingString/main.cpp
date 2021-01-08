#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <cstdio>
using namespace std;

int main()
{
    system("color 1F");
    string s1, s2;
    int x;

    cout << "\t\t\tTyping Practice\n\n" << endl;
    cout<< "\nRound 1\n" << endl;
    do{
        cout << "Enter the following string as shown on screen\n" << endl;

        cout<<"Hey their. I am using whatever i want." << endl;
        s2 = "Hey their. I am using whatever i want.";

        getline(cin, s1);
        x = s1.compare(s2);

        if(x != 0)
            cout << "\nPlease read the statement and than write precisely!!!\n" << endl;
    }while(x != 0);

    cout << "\nGOOD WORK\nRound 1 completed successfully.\n\n" << endl;
    cout<< "\nRound 2\n" << endl;
    string s[3], st[3];
    int j = 0;
    do{
        if(j > 0){Sleep(2000);}
        cout << "Enter the following string as shown on screen\n" << endl;

        cout << "\nPress 'Enter Key' to break a line.\n" << endl;
        s[0] = "It is a wonderful day today.";
        s[1] = "Today their is match between England and Pakistan.";
        s[2] = "I'm keenly excited to watch it and to see who is gonna win";

        for(int i = 0; i <3; i++)
        {
            cout << "\n" << s[i] << endl;
            getline(cin , st[i]);
            x = st[i].compare(s[i]);
            Sleep(1000);
            if(x != 0)
            {
                x = 1;
                break;
            }

        }

        if(x != 0){
            cout << "\nPlease read the statement and than write precisely!!!\n" << endl; j++;
            cout << "Hit Enter to start again " << endl;
            getchar();
        }
    }while(x != 0);
    cout<<"\nRound 2 Completed.\n" << endl;
    return 0;
}
