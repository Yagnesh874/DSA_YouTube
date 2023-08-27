#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
void Insertion_sort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return;
}
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> arr[i];
    }
    Insertion_sort(arr, 6);
    PrintArray(arr, 6);
    return 0;
}