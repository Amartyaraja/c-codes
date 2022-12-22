#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int key;
    node*left,*right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
   
};
  void zeroChild(node*root)
{  
    queue<node*> q;
    if(root==NULL)
    return;
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        if(temp->left==NULL&&temp->right==NULL)
        {
            cout<<(temp->key)<<" ";
        }
        if(temp->left!=NULL)
        {  
            q.push(temp->left);
            
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
}
 
int main()
{    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    zeroChild(root);
    return 0;
}
