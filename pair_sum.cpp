#include <iostream>
using namespace std;
int main()
{
    int a[7];
    int x;
    int totalPairs = 0;
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    cout << "Enter a number : ";
    cin >> x;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] + a[j] == x)
            {
                totalPairs++;
                cout << "The elements is [" << i << "]"
                     << "[" << j << "]";
            }
        }
    }
    return 0;
}