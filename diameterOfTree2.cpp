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
int height(node*root)
{
    if(root==NULL)
    return 0;
    return max(height(root->left),height(root->right))+1;

}
int diameter(node*root)
{
    if(root==NULL)
    return 0;
    int d=0;
    int lh=height(root->left);
    int rh=height(root->right);
    d=max(d,lh+rh);
    diameter(root->left);
    diameter(root->right);
    return d;
}
int main()
{
       
          node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    root->left->right->left=new node(70);
    int x=diameter(root);
    cout<<"diameter is : "<<x;
    return 0;

}
