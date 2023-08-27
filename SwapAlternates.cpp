#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            //swap(arr[i + 1], arr[i]);
            int temp=arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
int main()
{
    int even[8];
    int odd[5];
    cout << "The even number elements is : " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> even[i];
    }
    cout << "The odd number elements is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> odd[i];
    }
    cout << "Even array element is : " << endl;
    swap(even, 8);
    printArray(even, 8);
    cout << "Even odd element is : " << endl;
    swap(odd, 5);
    printArray(odd, 5);
    return 0;
}