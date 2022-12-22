// time complexity is O(n).
//space compexity is O(1).
//only one while loop is required.
 #include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
/*void printList(node*head1,node*head2)
{
    node*curr1=head1,*curr2=head2;
    while(curr1!=N||curr2!=NULL)

}*/
void getIntersection(node*head1,node*head2)
{
    node *curr1=head1,*curr2=head2;
    if(curr1==NULL||curr2==NULL)
    {
        return;
    }
    while(curr1!=curr2)
    {
        curr1=curr1==NULL? curr1=head2:curr1->next;
        curr2=curr2==NULL? curr2=head1:curr2->next;
        
    }
    cout<<curr1->data;
}
int main()
{
    node *head1=new node(10);
    head1->next=new node(20);
    head1->next->next=new node(30);
    head1->next->next->next=new node(40);
    head1->next->next->next->next=new node(50);
    node* head2=new node(60);
    head2->next=new node(70);
    head2->next->next=new node(80);
    head2->next->next->next=head1->next->next;
    // printList(head1,head2);
    getIntersection(head1,head2);
return 0;
}
