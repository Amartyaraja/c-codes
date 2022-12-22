#include<iostream>
using namespace std;
struct node
{
    int key;
    node*left,*right;
    node(int k)
    {
        key=k;
        right=left=NULL;
    }
};
// in order traversal;
void printTreeInOrder(node*root)
{
    if(root!=NULL)
    {
        printTreeInOrder(root->left);
        cout<<(root->key)<<" ";
        printTreeInOrder(root->right);
    }
    
}
void printPreOrder(node*root)
{
    if(root!=NULL)
    {
        cout<<(root->key)<<" ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}
void printPostOrder(node*root)
{
    if(root!=NULL)
    {
        printPostOrder(root->left);
        printPostOrder(root->right);
        cout<<(root->key)<<" ";
    }
}
int main()
{
    node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    cout<<"inorder traversal"<<endl;
    printTreeInOrder(root);
    cout<<endl<<"preordert traversal"<<endl;
    printPreOrder(root);
    cout<<endl<<"post order traversal"<<endl;
    printPostOrder(root);
    return 0;
}