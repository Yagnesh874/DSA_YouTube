#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> a;

    a.push("Hello");
    a.push("world");
    a.push("Human");

    cout << "The top name is : " << a.top() << endl;
    a.pop();
    cout << "The top name is  : " << a.top() << endl;

    cout << "The size is : " << a.size() << endl;
    cout << "empty or not  : " << a.empty() << endl;
    return 0;
}