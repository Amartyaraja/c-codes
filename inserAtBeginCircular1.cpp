  //this approach has time complexity of O(n).
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
node* insertAtBegin(node*head,int x){
    node*temp=new node(x);

    if(head==NULL)
    {   
     return temp;
    }
    node*curr=head;

    while(curr->next!=head)
    {
        curr=curr->next;

    }
    curr->next=temp;
    temp->next=head;
    return temp;
}
int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
     head->next->next->next=new node(40);
      head->next->next->next->next=new node(50);
       head->next->next->next->next->next=head;
      cout<<"previous linked list is "<<endl;
       printList(head);
       int y;
       cout<<"enter the value of y";
       cin>>y;
       head=insertAtBegin(head, y);
       cout<<"inserted LL is"<<endl;
       printList(head);

       return 0;
}