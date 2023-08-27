#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elemnts [" << i << "]";
        cin >> a[i];
    }
    reverseArray(a, 5);
    printArray(a, 5);
    return 0;
}