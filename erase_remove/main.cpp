#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);



    vector<int>::iterator itr = v.begin();
    for(; itr != v.end(); itr++)
        cout << "value = " << *itr << endl;
    //you cannot use remove and erase to the same vector one after another
    //once you use remove than erase+remove idiom has no effect on it. It remains as it is


    //Removing members from vector won't decrease size of vector but erasing it surely do
    cout << "\n\nAfter using erase with remove!!\n" << endl;
    //v.erase(v.begin()+4, v.end()-1);
    v.erase(std::remove(v.begin(), v.end(), 5) , v.end());
    for(itr = v.begin(); itr != v.end(); itr++)
        cout << "value = " << *itr << endl;
    return 0;
}
