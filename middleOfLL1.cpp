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


void middleElement(node*head)
{    int pos=1;
    if(head==NULL)
    {
        return;
    }
    
    node*fast=head; node*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;pos++;

     

}
cout<<slow->data<<endl;
cout<<"at position :"<<pos;


}
int main()
{
    
 node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
//head->next->next->next->next->next=new node(60);
cout<<"given list is"<<endl;

     printList(head);
     middleElement(head);
  
return 0;
}