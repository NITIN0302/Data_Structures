#include<bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.insert(val);
        return;
    }
    if(s.top() <= val)
    {
        s.push(val);
        return;
    }
    if(s.top() > val)
    {
        int p = s.top();
        s.pop();
        sortedinsert(s,val);
        s.push(p);
        return;
    }
}

void sortstack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int val = s.top();
    s.pop();
    sortstack(s);
    sortedinsert(s,val);
}

int main()
{
    stack<int> s;
    s.push(2);s.push(5);s.push(3);s.push(7);s.push(4);
    return 0;
}