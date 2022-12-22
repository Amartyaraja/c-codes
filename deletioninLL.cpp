
#include<bits/stdc++.h>
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
node* deleteNode(node*head,int n)
{
    node*curr=head;
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    { delete head;
    return NULL;
    }
    if(n==1)
    {
        curr=curr->next;
        delete(head);
        return curr;
    }
    else
    {
         for(int i=0;i<n-2;i++)
         curr=curr->next;
    }
    node*temp=curr->next;
    curr->next=curr->next->next;
    delete(temp);
    return head;

}





int main()
  {   int n;
     cout<<"position of element to delete";
cin>>n;
 node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
head->next->next->next->next->next=new node(60);
cout<<"given list is"<<endl;
printList(head);
head=deleteNode(head,n);
printList(head);
return 0;

}