#include <iostream>
#include <string>
using namespace std;
string encrypt(string pass, int len);
int main()
{
    string pass, pas2;
    int len, i, temp, j;
    cout << "Enter password --> ";
    cin >> pass;
    len = pass.length();
    /*i = 0;
    while(len != 0)
    {

        temp = len%16;
        cout << "Temp = " << temp << " = " << temp << " % " << 16 << endl;
        len = len/16;

        if(temp < 10){
            temp+= 48;
            pass[i] = temp;
            pas2 = temp;
            pas1.append(pas2);
            i++;
        }
        else
        {
            temp+=55;
            pass[i] = temp;
            pas2 = temp;
            pas1.append(pas2);
            i++;
        }
    }
    cout << "\nLength of i =" << i << endl;
    cout << "\nPrinting array:- " << endl;
    for(j = 0; j < i; j++ ) cout << pass[j] << " ";

    cout << "\nPrinting string = " << pas1 << endl;*/

    pass = encrypt(pass, len);
    cout << "\nMAIN FUNCTION" << endl;
    cout << "\nEncrypted password is " << pass << endl;
    return 0;
}
string encrypt(string pass, int len)
{
    int a[300], i, temp;
    string pas2;
    for(i = 0; i< len; i++) {a[i] = pass[i];}
    pass = "";
    for(i = 0; i< len; i++)
    {
        cout << "\n" <<a[i] << endl;
            while(a[i] != 0)
            {
                temp = a[i] % 16;
                a[i] = a[i]/16;
                if(temp < 10)
                {
                    temp+=48;
                    pas2 = temp;
                    pass.append(pas2);
                }
                else
                {
                    temp+=55;
                    pas2 = temp;
                    pass.append(pas2);
                }

            }
    }
    int j = 0;
    for(i = len; i >= 0; i--){ pas2[j] = pass[i]; j++; } // this for lop stores the password in correct order
    for(i = 0; i < j; i++){ pass[i] = pas2[i]; } //this stores the correct ordered password in pass
    return pass;
}
