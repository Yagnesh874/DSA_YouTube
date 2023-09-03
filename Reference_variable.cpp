#include <iostream>
using namespace std;

void update2(int& j)
{
    j++;
}
void update(int n)
{
    n++;
}
int main()
{
    /*
    int i = 5;
    int &j = i;
    cout << j << endl;
    j++;
    cout << j << endl;
    i++;
    cout << j << endl;
    i+=2;
    cout<<i<<endl;
    */
    int i = 5;
    cout << "Before : " << i << endl;
    update2(i);
    cout << "After  : " << i << endl;
    return 0;
}