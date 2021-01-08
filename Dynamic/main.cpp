#include <iostream>
#include<string.h>
using namespace std;

class dynamic{
    char *s;
    int len;
public:
    dynamic()
    {
        len = 0;
        s = new char[len + 1];
    }
    dynamic(const char *str)
    {
        len = strlen(str);
        s = new char[len + 1];
        strcpy(s, str);
    }
    void join(dynamic &s1, dynamic &s2)
    {
        int l1 = strlen(s1.s);
        int l2 = strlen(s2.s);

        s = new char{l1+l2+1};
        strcpy(s, s1.s);
        strcat(s, s2.s);
    }
    void show()
    {
        cout << "String is " << s << endl;
    }

};
int main()
{
    dynamic d1("hello");
    dynamic d2(" Guys"), d3( " It's good");
    dynamic s1, s2;
    s1.join(d1, d2);
    s2.join(s1, d3);
    s2.show();
    return 0;
}
