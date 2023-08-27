#include <iostream>
using namespace std;

int firstOccurrences(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccurrences(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int even[15];
    int key;
    for (int i = 0; i < 11; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " : ";
        cin >> even[i];
    }
    cout << "Enter a key : ";
    cin >> key;
    cout << "The first occurrences at the index is : " << firstOccurrences(even, 11, key) << endl;
    cout << "The last occurrences at the index is : " << lastOccurrences(even, 11, key) << endl;
    return 0;
}
