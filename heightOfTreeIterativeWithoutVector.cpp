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
    /* data */
};
int height(node*root)
{
    int level=0;
    queue<node*> q;
    if(root==NULL)
    {
        return 0;
    }
    q.push(root);
    while(!q.empty())
    {    
        int size=q.size();
        for(int i=0;i<size;i++)
        {
        node*temp=q.front();
        q.pop();
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
        }
        level++;

    }
    return level;
}
int main()
{
    node*root=new node(10);
     root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    root->right->right->right=new node(60);
    int h=height(root);
    cout<<"height of tree is "<<h<<endl;
    return 0;


}
