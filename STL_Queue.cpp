#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> a;
    a.push("Stack");
    a.push("Queue");
    a.push("Deque");
    cout << "Before size is : " << a.size() << endl;

    cout << "First string is : " << a.front() << endl;
    cout << "Last string is : " << a.back() << endl;

    a.pop();
    cout << "After size is : " << a.size() << endl;

    cout << "Empty or not : " << a.empty() << endl;
    return 0;
}