

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

void atPosition(node* head)
{
    node*curr=head;
    if(head==NULL)
    {
        cout<<"no linled list";
        return;


    }
    node* curr1=head;
    node*fast=head,*slow=head;

    while(fast->next!=NULL&& fast->next->next!=NULL)
    {int pos=1;
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            cout<<"circular"<<" "<<endl;;
            
            while(slow!=curr1)
            {
                slow=slow->next;
                curr1=curr1->next;
                pos++;
            }
            cout<<slow->data<<endl;
            cout<<pos<<endl;
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
       head->next->next->next->next->next=head->next->next;
       atPosition(head);

       return 0;

}