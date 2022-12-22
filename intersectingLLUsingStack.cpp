#include<iostream>
#include<stack>
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
node* intersection(node*head,node*head2)
{   node*curr1=head,*curr2=head2,*temp;

    stack<node*>s1,s2;
    while(curr1!=NULL)
    {
        s1.push(curr1);
        curr1=curr1->next;
    }
    while(curr2!=NULL)
    {
        s2.push(curr2);
        curr2=curr2->next;
    }
    while(s1.top()==s2.top())
    {    
        temp=s1.top();
         s1.pop();
        s2.pop();
    }
    
    return temp;

}
int main()
{ 
    
 node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
head->next->next->next->next=new node(50);
node*head2=new node(70);
head2->next=new node(80);
head2->next->next=head->next->next;
  node*temp=intersection(head,head2);
  cout<<temp->data;
  

return 0;


}