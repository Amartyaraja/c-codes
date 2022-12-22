#include<iostream>
using namespace std;
struct node 
{
    int key;
    node*left;
    node*right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
int height(node*root,int &d)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left,d);
    int rh=height(root->right,d);
    d=max(d,lh+rh);
    return 1+max(lh,rh);
}
int diameter(node*root)
{
    int d=0;
    height(root,d);
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
   int x= diameter(root);
    cout<<"diameter of tree is "<<x;
    return 0;



}