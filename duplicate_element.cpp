#include <iostream>
using namespace std;
int main()
{
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] == a[j])
            {
                cout << "The dupliacte element is : " << a[i] << endl;
                break;
            }
        }
    }
    return 0;
}