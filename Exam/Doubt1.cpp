#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class book{
    char name[50];
    float rate, amt;
    int qnt;
public:
    book()
    {
        amt = 0;
        cout << "Book Name = ";
        cin >> name;
        cout << "Quantity = ";
        cin >> qnt;
        cout << "Rate = ";
        cin >> rate;
        amt = qnt * rate;
    }
    void show(int x)
    {
        cout << "\nPrinting Book Info. of book NO. " << x << endl;
        cout << "Name = " << name << endl;
        cout << "Quantity = " << qnt << " Rate = " << rate << endl;
        cout << "Total Amount = " << amt << endl;
    }
};
int main()
{
    book b[2];
    for(int i = 0; i< 2; i++)
    {
            b[i].show(i+1);
    }

    return 0;
}
