#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class temp
{
    vector<int> v;
public:
    void getdata();
    void display();
    void sorting();
};
void temp ::getdata()
{
    int x, n, i;
    cout << "Enter Number of element to be entered :- "; cin >> n;
    for(i =0; i< n; i++)
    {
        cout << "Enter " << i+1 << " Number :- "; cin >> x;
        v.push_back(x);
    }
}
void temp :: display()
{
    cout << "<----- Displaying Vector ----> " << endl;
    for(int i = 0 ; i< v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
void temp :: sorting()
{
    cout << "\nSorted Vector " << endl;
    sort(v.begin(), v.end());
    display();
}
int main()
{

    temp obj;
    obj.getdata();
    obj.display();
    obj.sorting();
    return 0;
}
