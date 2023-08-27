#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> a;
    a[1] = "python";
    a[2] = "java";
    a[3] = "c++";

    a.insert({5, "Bheem"});
    cout << "Before erase : " << endl;
    for (auto i : a)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "13 present or not : " << a.count(5) << endl;
    a.erase(3);
    cout << "After erase  : " << endl;
    for (auto i : a)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}