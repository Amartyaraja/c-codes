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
node* mirrorTree(node*root)
{
    if(root==NULL)
    return NULL;
    else{
        if(root->left!=NULL)
    mirrorTree(root->left);
    if(root->right!=NULL)
    mirrorTree(root->right);
    swap(root->left,root->right);
}
}
void inorder(node* root)
{
    if(root==NULL)
    return ;
    else{
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);

    }
    
}
int main()
{  
      node*root=new node(10);
     root->left=new node(20);
    // root->right=new node(30);
     //root->left->left=new node(40);
    root->left->right=new node(50);
    //root->right->right=new node(60);
    inorder(root);
     mirrorTree(root);
     cout<<endl;
     inorder(root);
     return 0;
}
