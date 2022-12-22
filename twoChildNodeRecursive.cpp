#include<iostream>
using namespace std;
struct node{
    int key;
    node*left,*right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
    
};
void twoChild(node*root)
{
    if(root==NULL)
    return;
    else{
        if(root->left!=NULL&&root->right!=NULL)
        {
            cout<<(root->key)<<" ";
        }
        twoChild(root->left);
        twoChild(root->right);
        
    }
}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    twoChild(root);
    return 0;
}