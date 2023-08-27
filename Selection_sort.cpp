#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> arr[i];
    }
    cout << "The selection sort is : " << endl;
    selection_sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}