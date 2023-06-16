#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<pair<int,int>> s;
    int arr[] = {60,10,20,40,35,30,50,70,65};
    vector<int> ans;
    ans.push_back(1);
    s.push({60,0});
    for(int i=1;i<9;i++)
    {
        while(!s.empty() && s.top().first <= arr[i])
        {
            s.pop();
        }
        if(s.size() == 0)
        {
            ans.push_back(i+1);
        }
        else
        {
            ans.push_back(i-s.top().second);
        }
        s.push({arr[i],i});
    }
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}