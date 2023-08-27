#include <iostream>
using namespace std;

int binary_Search(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int sqaure = mid * mid;
        if (sqaure == n)
        {
            return mid;
        }
        if (sqaure > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{

    return 0;
}