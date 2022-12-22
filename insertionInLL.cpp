
 //insertion at any position in the linkedlist.
 
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node (int x)
    {
        data=x;
        next=NULL;

    }
};
 node* insertinLL(node*head, int x,int n)
{
     node*curr=head;
     node*temp=new node(x);
     if(n==1)
     {
        temp->next=head;
        return temp;
     }
     else
     {
        for(int i=1;i<n-1;i++)
       { 
        curr=curr->next;
       }
       temp->next=curr->next;
       curr->next=temp;
       return head;
     }
       

}
void printList(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;

    }

}
int main()
{   int n;
    cout<<"position to insert";
    cin>>n;

    node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
head->next->next->next->next->next=new node(60);
cout<<"given list is"<<endl;
printList(head);
 head=insertinLL(head,2 ,n);
 cout<<"inserted list is"<<endl;
 printList(head);
return 0;

}