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
    int low = 0,high = n-1;
    int mid;
    while(low < high)
    {
        if(arr[0] >= arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    cout<<"Pivot index is "<<low<<endl;
    return 0;
}
