#include <iostream>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sortOne(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int a[8];
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " : ";
        cin >> a[i];
    }
    sortOne(a, 8);
    printArray(a, 8);
    return 0;
}