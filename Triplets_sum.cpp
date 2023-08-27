#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int totalPairs = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    int x;
    cout << "Enter a number  : ";
    cin >> x;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    totalPairs++;
                    cout << "The elements is [" << i << "]"
                         << "[" << j << "]"
                         << "[" << k << "]";
                }
            }
        }
    }
    return 0;
}