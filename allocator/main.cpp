#include <iostream>
#include <memory>
using namespace std;

int main()
{
    allocator<int> myalloc;
    int *a = myalloc.allocate(3);
    myalloc.construct(a, 1);
    myalloc.construct(a+1, 2);
    myalloc.construct(a+2, 3);

    for(int i = 0; i< 3; i++)
        cout << "\nValues = " << a[i] << endl;


    for(int i = 0; i< 3; i++)
        myalloc.destroy(a+i);
    return 0;
}
