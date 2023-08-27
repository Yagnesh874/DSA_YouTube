#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
int main()
{
    // declare the array

    int number[15];

    // accessing the array

    cout << "The value of index 14" << number[14] << endl;

    // cout<<"The value of index 20"<<number[20]<<endl;

    int second[3] = {5, 7, 11};
    cout << "The value of second index is" << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;

    // printing the array

    // call the function

    // printArray(third, 15);

    int thirdSize = sizeof(third) / sizeof(int);
    cout << "The third size is " << thirdSize << endl;
    // intialization with 0

    int fourth[10] = {0};

    n = 10;

    // printArray(fourth, 10);

    // intialization with 1

    // call the function

    int fifth[10] = {1};

    n = 10;

    // printArray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth is " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // cout<<"The second character is : "<<ch[2];
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " "
             << "\n";
    }

    float a[5] = {3.4, 2.1, 6.7, 8.9, 6.7};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " "
             << "\n";
    }
    double b[5] = {3.44, 2.121, 6.7213, 8.9321, 6.7321};
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " "
             << "\n";
    }
    return 0;
}