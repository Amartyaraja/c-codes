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
int heightOfTree(node* root)
{
    if(root==NULL)
    return 0;
    else
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;
}
int main()
{
      node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    int height=heightOfTree(root);
    cout<<"heoight of treee is "<<height<<endl;
    return 0;

}