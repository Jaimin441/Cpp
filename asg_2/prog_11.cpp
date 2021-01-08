#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class student{
        char name[40];
        int id, sem_no;
        double cpi;
    public:
        void getdata()
        {
            cout << "Enter name :-" cin >> name;
            cout << "Enter ID:- "; cin >> id;
            cout << "Enter Semester number :- "; cin >> sem_no;
            cout << "Enter CPI :- "; cin >> cpi;
        }
        void write_in_file()
        {
            ofstream fout.open()
        }

};
