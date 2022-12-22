
#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
    node(int x)
    { 
        data=x;
        next=NULL;
    }
};
void printList(node*head)
{
    node*curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;

    } 
    while(curr!=head);
    cout<<endl;
}
int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
     head->next->next->next=new node(40);
      head->next->next->next->next=new node(50);
       head->next->next->next->next->next=head;
       printList(head);
       return 0;
}
