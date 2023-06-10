#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int low = 0,high = n-1,mid;
    int ans;
    while(low<=high)
    {
        mid = s+(e-s)/2;
        if(arr[mid] <= target)
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<"Last Position of "<<target<<" "<<ans<<endl;
    return 0;
}