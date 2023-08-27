#include <iostream>
#include <limits.h>
using namespace std;

int getmax(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        // max = arr[i];
        // }
    }
    return maxi;
}
int getmin(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        // min = arr[i];
        // }
    }
    return mini;
}
int main()
{
    int a[20];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the elements [" << i << "]";
        cin >> a[i];
    }
    cout << "The maximum value is : " << getmax(a, 5) << endl;
    cout << "The minimum value is : " << getmin(a, 5) << endl;
    return 0;
}