#include <iostream>
#include<queue>
using namespace std;

class stack
{
    public:
    queue<int> q;
    void stack_push(int val)
    {
        if(q.empty())
        {
            q.push(val);
            return;
        }
        int n = q.front();
        stack_push(val);
        q.push(n);
    }

    void pop()
    {
        q.pop();
    }

    int top
    {
        if(q.empyt())
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int val = q.front();
        q.pop();
    }

    bool isEmpty()
    {
        if(q.empty())
        {
            return true;
        }
        return false;
    }
}

int main()
{
    stack *s = new stack();
    s->push_stack(10);
    s->push_stack(20);
    s->push_stack(30);
    s->push_stack(40);
    s->push_stack(50);

    cout<<s->isEmpty()<<endl;
    cout<<s->top()<<endl;
    s->pop();
    cout<<s->top()<<endl;
    return 0;
}