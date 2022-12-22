#include<iostream>
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
int getSize(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (1+getSize(root->left)+getSize(root->right));

}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
      int size= getSize(root);
      cout<<size<<endl;
    return 0;

}