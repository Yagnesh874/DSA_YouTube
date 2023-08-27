#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<int> a(5,1);

     for (int j : a)
    {
        cout << j << " ";
    }
    cout << endl;
    cout << "Capacity is : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity is : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity is : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity is : " << v.capacity() << endl;

    v.push_back(4);
    cout << "Capacity is : " << v.capacity() << endl;
    cout << "Size is : " << v.size() << endl;

    cout << "Element of 2nd index is : " << v.at(3) << endl;

    cout << "The first element is : " << v.front() << endl;

    cout << "The last element is : " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << " After pop" << endl;
    for (int i : v)
    {
        cout << i << "\t";
    }

    cout << "Before clear size : " << v.size() << endl;
    v.clear();
    cout << "After clear size : " << v.size() << endl;
    return 0;
}