#include<iostream>
using namespace std;
struct node{
    int key;
    node* left,*right;
    node(int k=0)
    {
        key=k;
        left=right=NULL;
    }

};
void inorder(node* root)
{
    if(root==NULL)
    return;
    else{
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);

    }
    
}
node* mirrorTree(node*root)
{
    if(root==NULL)
    return NULL;
    else{
        node*temp=new node();
        temp->left=temp->right=NULL;
        temp->key=root->key;
        if(root->left!=NULL)
        {
            temp->right=mirrorTree(root->left);
        }
        if(root->right!=NULL)
        {
            temp->left=mirrorTree(root->right);

        }
         return temp;

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
    inorder(root);
    cout<<endl;
    root=mirrorTree(root);
    inorder(root);

    return 0;
}

