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
node* floor(node*root,int x)
{
    node*flr=NULL;
    while(root!=NULL)
    {
        if(root->key==x)
        return root;
        else if(root->key<x)
        {
            flr=root;
            root=root->right;
        }
        else
        root=root->left;
    }
    return flr;
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
    cout<<"enter the element for which floor to be searched :"<<endl;
    cin>>x;
     node* temp=floor(root,x);
     cout<<temp->key;
    
   
    return 0;
}