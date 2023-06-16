#include <iostream>
using namespace std;

class stack
{
    public:
    int *arr;
    int capacity;
    int top1;
    int top2;
    
    stack(int val)
    {
        capacity = val;
        arr = new int[val];
        top1 = -1;
        top2 = capacity;
    }
    
    void push1(int val)
    {
        if(top1 >= top2-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top1++;
        arr[top1] = val;
    }
    void push2(int val)
    {
        if(top2 <= top1+1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top2--;
        arr[top2] = val;
    }
    
    void printstack()
    {
        for(int i=0;i<capacity;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    void pop1()
    {
        if(top1 == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        arr[top1] = 0;
        top1--;
    }
    
    void pop2()
    {
        if(top2 == capacity)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        arr[top2] = 0;
        top2++;
    }
    
    int isEmpty1()
    {
        if(top1 == -1)return true;
        return false;
    }
    
    int isEmpty2()
    {
        if(top2 == capacity)return true;
        return false;
    }
    
    int peek1()
    {
        if(top1 == -1)return -1e9;
        return arr[top1];
    }
    
    int peek2()
    {
        if(top2 == capacity) return -1e9;
        return arr[top2];
    }
    
};


int main()
{
    stack *s = new stack(10);
    
    s->push1(10);s->push1(20);s->push2(30);s->push2(40);s->push2(50);
    s->push1(60);s->push1(70);s->push2(80);s->push2(25);s->push2(35);
    
    cout<<s->isEmpty1()<<" "<<s->isEmpty2()<<endl;
    s->pop1();s->pop2();
    
    s->printstack();
    cout<<s->peek1()<<" "<<s->peek2()<<endl;

    return 0;
}