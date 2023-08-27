#include <iostream>
using namespace std;

int peak_mountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int a[10];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    cout << "The maximum in peak mountain is : " << peak_mountain(a, 5) << endl;
    return 0;
}