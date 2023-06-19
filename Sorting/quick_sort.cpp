#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
    int val = arr[s];
    int index = s;
    for(int i=s;i<=e;i++)
    {
        if(arr[i] < val)
        {
            index++;
        }
    }
    int i=s+1,j=e;
    while(s<e)
    {
        while(s<index && arr[s] < val)
        {
            i++;
        }
        while(e>index && arr[e] > val)
        {
            j--;
        }
        if(i!=j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[s],arr[index]);
    return index;
}

void quicksort(int arr[],int s,int e)
{
    if(s < e)
    {
        int pivot = partition(arr,s,e);
        quicksort(arr,s,pivot-1);
        quicksort(arr,pivot+1,e);
    }
}
int main()
{
    int arr[] = {2,5,3,9,8,6};
    quicksort(arr,0,5);
    return 0;
}
