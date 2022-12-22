  
  //intersection by traversing 2nd linkedlist for each element of 1st linkedlist.
         // time complexity is O(n^2). 
         //space complexity is O(1).
  
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
void getintersection(node*head1,node*head2)
{      node*curr1=head1,*curr2=head2;
      if(curr1==NULL||curr2==NULL)
      {
        cout<<"no intersection";
        return;
      }
      while(curr1!=NULL)
      {curr2=head2;
           while(curr2!=NULL)
           {
            if(curr1==curr2)
            {
                cout<<curr1->data;
                return;
            }
            curr2=curr2->next;
           }
           curr1=curr1->next;


      }
      

}
int main()
{
    node*head1=new node(10);
    head1->next=new node(20);
    head1->next->next=new node(30);
    head1->next->next->next=new node(40);
    node*head2=new node(50);
    head2->next=new node(60);
    head2->next->next=new node(70);
    head2->next->next->next=head1->next;
    getintersection(head1,head2);
    return 0;

}