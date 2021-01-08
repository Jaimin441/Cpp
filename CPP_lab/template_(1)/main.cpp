#include <iostream>
#include <string.h>
using namespace std;

template<class T>
class vector{
    T *v;
    int size;
public:
    vector()
    {
        int n, i;
        cout << "\nSize of T = " << sizeof(T) << endl;
        cout << "\nEnter number of elements to be entered :- "; cin>> n;
        size = n;
        v = new T[size];
        for(i = 0; i< size; i++)
        {
            cout << "Enter " << i+1 << " element:- "; cin >> v[i];
        }
    }
    void display()
    {
        cout << "\n\t<----Displaying Vector -----> " << endl;
        for(int i = 0; i< size; i++)
        {
            cout << v[i] << " ";
        }
    }
    void sorting()
    {
        int i, j;
        T temp;
        cout << "\n\n\tSorting Vector in Ascending order ";
        for(i = 0; i< size; i++)
        {
            for(j = i+1; j< size; j++)
            {
                if(v[i] > v[j])
                {
                    temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
        }
        display();
    }
};
int main()
{
    int ch;
    cout << "Enter 1 - for Integer vector " << endl;
    cout << "Enter 2 - for Float vector " << endl;
    cout << "Enter 3 - for Character vector " << endl;
    cout << "Enter 4 - for String vector " << endl;
    cin >> ch;
    if(ch == 1)
    {
        vector <int> v;
        v.display();
        v.sorting();
    }
    else if(ch == 2)
    {
        vector <float> v;
        v.display();
        v.sorting();
    }
    else if(ch == 3)
    {
        vector <char> v;
        v.display();
        v.sorting();
    }
    else if(ch == 4)
    {
        vector<string> v;
        v.display();
        v.sorting();
    }
    else{cout << "\nEnter a valid Input " << endl;}
    return 0;
}
