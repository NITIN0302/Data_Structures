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
    
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j] > key)
        {
            j--;
        }
        arr[j+1] = key;
    }

    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
