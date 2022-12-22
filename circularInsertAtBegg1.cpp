//insertion in circular LL at the beggining of LL by traversing the LL.
// time complexity is O(n).
// space complexity is O(1).


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
    if(curr==NULL)
    {
        cout<<" no linked list present:";
    }
    cout<<curr->data<<" ";
    curr=curr->next;
    while(curr!=head)
    {
        cout<<curr->data<<" ";
        curr=curr->next;


    }
    cout<<endl;
    
    
}
node* InsertAtBegg(node*head,int x)
{
    node*temp=new node(x);
    node*curr=head;
    if(curr==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else{
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
        return temp;

    }
}


int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
     head->next->next->next=new node(40);
      head->next->next->next->next=new node(50);
       head->next->next->next->next->next=head;
       cout<<"given LL"<<endl;

      printList(head);
      head=InsertAtBegg(head,5);
      cout<<" inserted LL"<<endl;
      printList(head);

      return 0;
}