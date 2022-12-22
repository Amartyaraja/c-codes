//(length -nth position +1)th from begg. method.


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
    int len=0;
    for(node*curr=head; curr!=NULL; curr=curr->next)
    {
        len++;
    }
    if(len<n)
    {
        return;
    }
    node *curr=head;
    for(int i=1;i<(len-n+1);i++)
    {
        curr=curr->next;

    }
    cout<<endl<<n<<  "th node from end is"<< " " <<curr->data<<" ";
}


int main()
{int n; 
cout<<"enter n";
cin>>n;

node *head=new node(10);
head->next=new node(20);
head->next->next=new node(30);
head->next->next->next=new node(40);
printList(head);
printNthEnd(head, n);


}