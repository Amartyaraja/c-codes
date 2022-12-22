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
node* lca(node*root,node*p,node*q)
{
    if(p->key<root->key&&q->key<root->key)
    lca(root->left,p,q);
    else if (p->key>root->key&&q->key>root->key)
    {
       root=root->right;

    }
    else 
    return root;
    

    
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
    node*p,*q;
    p=root->left->right;
    q=root->left;
      node*temp=lca(root,p,q);
      cout<<temp->key;
      return 0;


}