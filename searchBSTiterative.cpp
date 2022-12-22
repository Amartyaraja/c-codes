#include<iostream>
using namespace std;
struct node
{int key;
node*left,*right;
node(int k)
{
    key=k;
    left=right=NULL;
}
    /* data */
};
bool search(node*root,int x)
{
    if (root==NULL)
    {
        return false;

    }
    node* parent=NULL,*curr=root;
    
}
int main()
{
       
          node*root=new node(50);
    root->left=new node(30);
    root->right=new node(70);
    root->left->left=new node(25);
    root->left->right=new node(40);
    root->right->right=new node(75);
    root->right->left=new node(55);
    int x;
    cout<<"enter the element to be searched :"<<endl;
    cin>>x;
    cout<<search(root,x);
    
   
    return 0;
}