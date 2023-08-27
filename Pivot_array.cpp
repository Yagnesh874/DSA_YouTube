#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    int a[10];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    cout << "The index of pivot number is : " << getPivot(a, 5);
    return 0;
}