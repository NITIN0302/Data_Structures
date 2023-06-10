#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element you wanr to search "<<endl;
    cin>>target;
    int low = 0,high = n-1;
    int mid;
    while(low <= high)
    {
        mid = s + (e-s)/2;
        if(arr[mid] == target)
        {
            cout<<"Index is:"<<mid<<endl;
            break;
        }
        else if(arr[low] <= arr[mid])
        {
            if(target >= arr[low] && target<arr[mid])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else
        {
            if(target <= arr[high] && target > arr[mid])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return 0;
}
