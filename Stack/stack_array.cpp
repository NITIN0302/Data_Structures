#include<iostream>
using namespace std;

class stack
{
    int *arr;
    int top;
    int capacity;
    stack(int capacity)
    {
        this->arr = new int[capacity];
        this->top = -1;
        this->capacity = capacity;
    }
    void push(int val)
    {
        if(top >= capacity-1)
        {
            cout<<"Stack is Full"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if(top == -1)return;
        top--;
    }
    int topelement()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if(top >= capacity)
        {
            return true;
        }
        return false;
    }
    void delete_stack()
    {
        delete[] arr;
        top = -1;
    }
};

int main()
{
    stack *s(20);
    return 0;
}