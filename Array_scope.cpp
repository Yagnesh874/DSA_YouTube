#include <iostream>
using namespace std;

void updateArray(int arr[], int size)
{
    arr[0] = 21;
    arr[1] = 67;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    updateArray(a, 5);
    return 0;
}