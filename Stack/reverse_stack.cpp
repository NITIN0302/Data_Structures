#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }

    int n = s.top();
    s.pop();
    insert_at_bottom(s,val);
    s.push(n);
}

void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int n = s.top();
    s.pop();
    reverse(s);
    insert_at_bottom(s,n);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    return 0;
}