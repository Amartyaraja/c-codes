//reversal by three pointer approach.


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
void reverse(node* head)
{
    if(head==NULL)
    {
        cout<<" no list available";
    }
    node*curr=head,*prev=NULL,*next=NULL;
    while(curr!=NULL)
    {next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    head=prev;
    cout<<"reversed linked list is"<<endl;
    while(head!=NULL)
    {
         cout<<head->data<<" ";
         head=head->next;
    }
}
void printList(node* head)
{
    node*curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}


int main()
{
// node* head=NULL;
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
head->next->next->next->next->next=new node(60);
cout<<"given list is"<<endl;
printList(head);
 reverse(head);
 //cout<<endl<<"reversed list is"<<endl;
 //printList(head);
return 0;
}
