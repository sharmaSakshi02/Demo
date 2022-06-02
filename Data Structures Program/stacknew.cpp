#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int arr[5];
    public:
    stack(){
        top=-1;
    }
    bool isFull(){
        bool f=false;
        if(top==4){
            f=true;
        }
        return f;
    }
    bool isEmpty(){
        bool f=false;
        if(top==-1){
            f==true;
        }
         return f;
    }
    void push(int x){
        if(isFull()){
            cout<<"Stack is full."<<endl;
            return;
    
    top++;
    arr[top]==x;
    cout<<"Pushed item is "<<arr[top]<<endl;
    }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty."<<endl;
            return;
        }
    }
    int peek(){
        if(isEmpty()){
            return -1;
        }
        return arr[top];
    }
    void display()
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main(){
    stack s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.pop();
     s.display();
     return 0;
}