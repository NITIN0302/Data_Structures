#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int low = 0;
    int high = n;
    int mid;
    int target;

    cout<<"Enter the value you want to search:";
    cin>>target;

    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] == target)
        {
            cout<<"Index: "<<mid;
            break;
        }
        else if(arr[mid] > target)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return 0;
}