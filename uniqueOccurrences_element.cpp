#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    int count = 0;
    bool flag = false;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if(a[i] == a[j])
            {
                flag = true;
            }

        }
        if(flag == false)
        {
            cout<<"The unique element is : "<<a[i];
            break;
        }
    }
    return 0;
}