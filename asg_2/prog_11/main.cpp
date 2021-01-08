#include<iostream>
#include<fstream>
using namespace std;

class student{
        char name[40];
        int id, sem_no;
        double cpi;
    public:
        void getdata()
        {
            cout << "Enter name :-"; cin >> name;
            cout << "Enter ID:- "; cin >> id;
            cout << "Enter Semester number :- "; cin >> sem_no;
            cout << "Enter CPI :- "; cin >> cpi;
        }
        void display()
        {
            cout << "\nName --> " << name << endl;
            cout << "ID --> " << id << endl;
            cout << "Sem No. --> " << sem_no << endl;
            cout << "CPI --> " << cpi << endl;
        }
};
int main()
{
    int n, i;
    student s1[10], s2[10];
    cout << "Enter the number of students:- "; cin >> n;
    ofstream fout("stu_info");
    for( i = 0; i< n; i++)
    {
        s1[i].getdata();
        fout.write( (char *) & s1[i], sizeof(s1[i]));
        fout << endl;
    }
    fout.close();
    ifstream fin("stu_info");
    cout << "\nDisplaying file info " << endl;
    for(i = 0; i< n; i++)
    {
        fin.read( (char *) & s2[i], sizeof(s2[i]));
        s2[i].display();
    }
    fin.close();
    return 0;
}
