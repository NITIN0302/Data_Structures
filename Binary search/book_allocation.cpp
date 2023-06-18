#include< bits/stdc++.h>
using namespace std;

bool ispossible(int arr[],int size,int mid,int total)
{
    int count = 1;
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum += arr[i];
        if(sum > mid)
        {
            count++;
            sum = arr[i];
        }
        if(count > total || arr[i] > mid)
        {
            return false;
        }
    }
    if(count == total)
    {
        return true;
    }
    return false;
}


int main()
{
    int arr[] = {12,16,67,89,120};
    int total = 3;
    int s=INT_MAX,e=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i] < s)
        {
            s = arr[i];
        }
        e += arr[i];
    }
    int mid;

    while(s <= e)
    {
        mid = (s+e)/2;
        if(ispossible(arr,5,mid,total))
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    cout<<mid<<endl;
    return 0;
}