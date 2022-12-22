
//intersection of two linled list using fast and slow pointer approach (run one pointer by diff. of lenth of linked list.)
//time compexity is O(n).
//space complexity is O(1).
//here 3 while loops are required.
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
{  int len1=0,len2=0;
    node*curr1=head1,*curr2=head2;
    if(curr1==NULL||curr2==NULL)
    {
        cout<<"no intersection"; 
    }
    while(curr1!=NULL)
    {
         len1++;
         curr1=curr1->next;
    }
    cout<<len1<<endl;
   curr1=head1;
    while(curr2!=NULL)
    {
        len2++;
        curr2=curr2->next;
    }
    cout<<len2<<endl;
 curr2=head2;
    if( len1>len2)
    {
        for(int i=0;i<(len1-len2);i++)
        {
            curr1=curr1->next;
        }

    }
    else
    {
        for(int i=0;i<(len2-len1);i++)
        {
            curr2=curr2->next;
        }
    }
    while(curr1!=curr2)
    {
        curr1=curr1->next;
        curr2=curr2->next;
    }
    cout <<curr1->data;
    


}
int main()
    {
        node*head1=new node(10);
        head1->next=new node(20);  
        head1->next->next=new node(30);
        head1->next->next->next=new node(40);
        head1->next->next->next->next=new node(50);
        node*head2=new node(60);
        head2->next=new node(100);
        head2->next->next=new node(70);
        head2->next->next->next=head1->next->next;
        getintersection(head1,head2);
        return 0;
    }
