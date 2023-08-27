#include <iostream>
using namespace std;

void intersection(int arr[], int brr[], int size1, int size2)
{
    int i, j;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr[i] == brr[j])
            {
                cout << "Common element is : " << arr[i] << endl;
                break;
            }
        }
    }
}
int main()
{
    int size1;
    int size2;
    cout << "Enter a size 1 : ";
    cin >> size1;
    int arr[size1];
    cout << "Enter a size 2 : ";
    cin >> size2;
    int brr[size2];
    cout << "First array : " << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter array elements [" << i << "]";
        cin >> arr[i];
    }
    cout << "Second array : " << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> brr[i];
    }
    intersection(arr, brr, size1, size2);
    return 0;
}