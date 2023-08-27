#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    
    cout<<"Finding 7 : "<<binary_search(v.begin(),v.end(),7)<<endl;
    
    cout<<"Lower bound : "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
    cout<<"Upper bound : "<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"Max is : "<<max(a,b)<<endl;
    cout<<"Min is : "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"A is : "<<a<<endl;
    cout<<"B is : "<<b<<endl;

    string name = "abcd";
    reverse(name.begin(),name.end());
    cout<<"After reverse  : "<<name<<" "<<endl;


    cout<<"Rotated array is : "<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}