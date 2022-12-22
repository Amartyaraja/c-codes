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
  while(curr!=NULL)
  {
    cout<<curr->data<<" ";
    curr=curr->next;
  }
  cout<<endl;
}
node* insert(node* head,int x)
{
      node*curr=head,*temp2;
  node*temp=new node(x);
  if(head==NULL)
  return temp;
  if(temp->data<curr->data)
  {
    temp->next=curr;
    return temp;
  }



    
     while(curr!=NULL&&curr->data<temp->data)
     {
        temp2=curr;
        curr=curr->next;

     }
     temp->next=curr;
     temp2->next=temp;
     return head;
}


int main()
{ 
      int x;
    cout<<"enter the value to be inserted:"<<endl;
    cin>>x;

    
 node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
//head->next->next->next->next->next=new node(60);
cout<<"given list is"<<endl;

     printList(head);
    head=insert(head,x);
      printList(head);
      return 0;

}