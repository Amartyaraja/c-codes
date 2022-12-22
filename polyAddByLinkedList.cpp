// addition of polynomial using linkedlist.
//time complexity is O(n).
//space complexity is O(1).




#include<iostream>
using namespace std;
struct node
{
    int coeff;
    int exp;
    node*next;
    node(int x=0, int y=0)
    {
        coeff=x;
        exp=y;
        next=NULL;

    }
};
void printList(node*head)
{
    node*head3=head;
    while(head3!=NULL)
    {
        cout<<head3->coeff<<"x^"<<head3->exp<<"+";
        head3=head3->next;
    }
    cout<<endl;
    }


    node*add_poly(node*head1,node*head2,node*head3)
    {
        node*curr1=head1,*curr2=head2;
        
    node*curr=head3;
       while(curr1!=NULL&&curr2!=NULL)
       {
        if(curr1->exp==curr2->exp)
        {
            curr->coeff=curr1->coeff+curr2->coeff;
            curr->exp=curr1->exp;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else if(curr1->exp>curr2->exp)
        {
            curr->coeff=curr1->coeff;
            curr->exp=curr1->exp;
            curr1=curr1->next;

        }
        else{
            curr->coeff=curr2->coeff;
            curr->exp=curr2->exp;
            curr2=curr2->next;

        }
        

       curr=curr->next;

       }
      return head3;
    }
int main()
{
    node*head1=new node(4,3);
    head1->next=new node(3,2);
    head1->next->next=new node(2,1);
    node*head2=new node(3,3);
    head2->next=new node(2,2);
    head2->next->next=new node(3,1);
   
   node*head3=new node();
    head3->next=new node();
     head3->next->next=new node();
      head3->next->next->next=new node();
      
    cout<<" given 1st LL are:"<<endl;
    printList(head1);
    cout<<"givem 2nd LL"<<endl;
    printList(head2);
     node*head=add_poly(head1,head2,head3);
     cout<<"addition og polynomial is "<<endl;

     printList(head3);
    return 0;
}