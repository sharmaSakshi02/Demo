#include<iostream>
using namespace std;
class queue
{
    private:
    int front,rear;
    int arr[5];
    public:
    queue(){
        front=0;
        rear=-1;
    }
    bool isEmpty(){
        bool f=false;
        if(rear<front)
        {
            f=true;
        }
        return f;
    }
    bool isFull()
    {
        bool f=false;
        if(rear==4)
        {
            f=true;
        }
        return f;
    }
    void enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue Full"<<endl;
            return;
        }
        rear++;
        arr[rear]=x;
        cout<<"enqueue item is"<<arr[rear]<<endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Dequeue item is"<<arr[front]<<endl;
        front++;
    }
    void show()
    {
        cout<<"Queue items are:"<<endl;
        int i;
        for(i=front;i<=rear;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    queue ob;
    ob.enqueue(10);
    ob.enqueue(20);
    ob.enqueue(30);
    ob.enqueue(40);
    ob.enqueue(50);
    ob.enqueue(60);
    ob.show();
    ob.dequeue();
    ob.show();
    return 0;
}
