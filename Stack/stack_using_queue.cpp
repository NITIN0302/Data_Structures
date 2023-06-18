class MyStack {
public:

    queue<int> q;

    MyStack() {}
    
    void push(int x) 
    {
        int size = q.size();
        q.push(x);
        for(int i=0;i<size;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() 
    {
        if(q.size() == 0)return -1;
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() 
    {
        if(q.size() == 0)
        {
            return -1;
        }
        return q.front();
    }
    
    bool empty() 
    {
        if(q.size() == 0)
        {
            return 1;
        }
        return 0;
    }
};