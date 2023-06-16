#include<bits/stdc++.h>
using namespace std;

class heap
{
   public:
      int *arr;
      int size;
      int capacity;
      
      heap(int val)
      {
          arr = new int[val];
          capacity = val;
          size = 0;
      }
      int left(int i)
      {
        return 2*i + 1;
      }
      int right(int i)
      {
        return 2*i + 2;
      }
      int parent(int i)
      {
        return (i-1)/2;
      }
      
      void insert(int val)
      {
            if(size == capacity)return;
            arr[size] = val;
            size++;
            int i = size-1;
            while(i != 0 && arr[i] < arr[(i-1)/2] )
            {
                  swap(arr[i],arr[(i-1)/2]);
                  i = (i-1)/2;
            }
      }
      
      void heapify(int index)
      {
            int smallest = index;
            int l = left(index);
            int r = right(index);
            
            if(l <= size && arr[index] > arr[l])
            {
                  smallest = l;
            }
            if(r <= size && arr[index] > arr[r])
            {
                  smallest = r;
            }
            if(smallest != index)
            {
                  swap(arr[index],arr[smallest]);
                  heapify(smallest);
            }
      }
      
      int ExtractMin()
      {
            if(size == 0)
            {
                  return -1;
            }
            if(size == 1)
            {
                  size--;
                  return arr[size];
            }
            swap(arr[0],arr[size-1]);
            size--;
            heapify(0);
            return arr[size];
      }
      
      void printheap()
      {
            for(int i=0;i<size;i++)
            {
                  cout<<arr[i]<<" ";
            }
            cout<<endl;
      }
};

int main()
{
    heap *h = new heap(10);
    h->insert(20);
    h->insert(10);
    h->insert(15);
    h->insert(45);
    h->insert(40);
    h->insert(100);
    h->insert(25);
    h->insert(50);
    h->printheap();
    cout<<h->ExtractMin()<<endl;
    h->printheap();
    return 0;
}