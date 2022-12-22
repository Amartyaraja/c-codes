
//Mth element from end by usiny two pointer approach (slow and fast).

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
void printList(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;

    }

}
void printNthEnd(node *head,int n)
{
   node*fast=head,*slow=head;
   if(fast==NULL)
   {
    cout<<"no nodes present"<<" ";
    return ;
   }
   for(int i=0;i<n;i++)
   {
    fast=fast->next;
   }
   
   
   while(fast!=NULL)
   {
    fast=fast->next;
    slow=slow->next;
   }
   cout<<endl<<slow->data;
   
}







int main()
{
   int n; 
cout<<"enter n"<<"  ";
cin>>n;
// node* head=NULL;
node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
head->next->next->next->next->next=new node(60);

printList(head);
printNthEnd(head, n); 
return 0;
}