#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[10];
    int odd[10];
    int key;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> even[i];
    }
    cout << "Enter a number to search in the array : " << endl;
    cin >> key;
    int evenIndex = binary_search(even, 6, key);
    cout << "The index number is : " << evenIndex << endl;
    return 0;
}