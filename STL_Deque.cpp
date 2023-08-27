#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " " << endl;
    }
    // d.pop_back();
    // d.pop_front();
    // cout << "After pop back : " << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "The first index number is : " << d.at(1) << endl;

    cout << "The first number is : " << d.front() << endl;
    cout << "The last number is : " << d.back() << endl;

    cout << "Empty or not : " << d.empty() << endl;

    cout << "Before size : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After size : " << d.size() << endl;
    return 0;
}