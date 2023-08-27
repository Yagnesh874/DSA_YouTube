#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " << endl;
    }
    cout << "Element of 2nd index is : " << a.at(2) << endl;
    cout << "Empty or not : " << a.empty() << endl;
    cout << "The first element is : " << a.front() << endl;
    cout << "The last elements is : " << a.back() << endl;
    return 0;
}