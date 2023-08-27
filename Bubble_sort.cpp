#include <iostream>
using namespace std;

void Bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> arr[i];
    }
    cout << "The sorting is : " << endl;
    Bubble_sort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

