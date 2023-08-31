#include <iostream>
using namespace std;

int getsum(int *arr, int size)
{
    cout << endl
         << "size is : " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter elements [ " << i << "]"
             << " : ";
        cin >> arr[i];
    }
    cout << "The sum is : " << getsum(arr+3, 3);
    return 0;
}