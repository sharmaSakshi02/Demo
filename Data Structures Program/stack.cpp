#include <iostream>
using namespace std;
class stck
{
private:
    int top=-1, arr[5], i;

public:
    void push(int item)
    {
        if (top == 4)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = item;
        cout << "Pushed item is " << arr[top] << endl;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped element is:" << arr[top] << endl;
        arr[top] = 0;
        top = top - 1;
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
int main()
{
    // stck s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.pop();
    // s.display();
    string exp;
    cout<<"Enter expression"<<endl;
    cin>>exp;
    for (size_t i = 0; i < exp.size(); i++)
    {
        cout<<exp[i]<<endl;
    }
    
    return 0;
}