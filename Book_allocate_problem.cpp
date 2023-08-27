#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int s = 0;
    int studentCount = 1;
    int pageSum = 0;
    int e = 0;
    mid = s + (e - s) / 2;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] > mid)
        {
            studentCount++;
            pageSum = arr[i];
            if (studentCount > m)
            {
                return false;
            }
        }
        // if (studentCount > m)
        // {
        //     return false;
        // }
        else
        {

            pageSum += arr[i];
        }
    }
    return true;
}
int allocateBook(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[4];
    int student;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter elements [" << i << "]";
        cin >> arr[i];
    }
    cout << "Enter a student : ";
    cin >> student;
    cout << "The allocate problem is : " << allocateBook(arr, 4, student);
    return 0;
}
// #include <iostream>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid) {
//     int s = 0;
//     int studentCount = 1;
//     int pageSum = 0;
//     int e = 0; // Initialize 'e' to 0

//     for (int i = 0; i < n; i++) {
//         if (pageSum + arr[i] > mid) {
//             studentCount++;
//             pageSum = arr[i];
//             if (studentCount > m) {
//                 return false;
//             }
//         } else {
//             pageSum += arr[i];
//         }
//     }
//     return true;
// }

// int allocateBook(int arr[], int n, int m) {
//     int s = 0;
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;

//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (isPossible(arr, n, m, mid)) {
//             ans = mid;
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[4];
//     int student;

//     for (int i = 0; i < 4; i++) {
//         cout << "Enter elements [" << i << "]: ";
//         cin >> arr[i];
//     }

//     cout << "Enter the number of students: ";
//     cin >> student;

//     cout << "The allocated pages problem result is: " << allocateBook(arr, 4, student) << endl;
//     return 0;
// }
