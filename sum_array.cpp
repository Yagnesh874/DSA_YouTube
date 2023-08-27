#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> a[i];
    }
    cout << "The sum is : " << sumArray(a, 5);
    return 0;
}