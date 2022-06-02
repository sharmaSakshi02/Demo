#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *next;
};
int main()
{
    Node *start=nullptr;
    Node *p;
    p=new Node;
    p->info=10;
    p->next=nullptr;
    start =p;
    p=new Node;
    p->info=120;
    p->next=start;
    start =p;
    p=new Node;
    p->info=456;
    p->next=start;
    start =p;
    Node *temp;
    temp=start;
    while (temp!=nullptr)
    {
        cout<<temp->info<<endl;
        temp=temp->next;
    }
    return 0;
}
