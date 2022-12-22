   // detect the cycle 



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
void Iscircular(node*head)
{
   node*fast=head,*slow=head;
   node*curr=head;
   if(curr==NULL)
   {
    cout<<"no node present";
    return;
   }
   while(fast->next!=NULL&& fast->next->next!=NULL)
   {
    fast=fast->next->next;
    slow=slow->next; 
    if(fast==slow)
    {
        cout<<"circular"<<endl; 
        return;

    }
   } 
   cout<<"not circular";
   
   
   
}

int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
     head->next->next->next=new node(40);
      head->next->next->next->next=new node(50);
       head->next->next->next->next->next=head->next->next->next;
       Iscircular(head);
       return 0;

}
