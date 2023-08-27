#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int search)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[5];
    int searchElement;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter elemnts [" << i << "]";
        cin >> a[i];
    }
    cout << "Enter the search elemnts : ";
    cin >> searchElement;
    bool found = linearSearch(a, 5, searchElement);
    if (found)
        cout << "element found in this array";
    else
        cout << "Elemnts not found in this array";
    return 0;
}