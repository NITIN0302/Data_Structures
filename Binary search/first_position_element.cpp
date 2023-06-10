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
        mid = s + (e-s)/2;
        if(arr[mid] >= target)
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<"First position of "<<target<<" "<<ans<<endl;
    return 0;
}