#include<iostream>
#include<queue>
using namespace std;
struct node{
    int key;
    node*left,*right;
    node(int k)
    {
        key=k;
        right=left=NULL;
    }
};
int getSize(node* root)
{
    int count =0;
    queue<node*> q;
   
    if(root==NULL)
    {
        return 0;
    }
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        count++;
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
    return count;
    
    
}
int main()
{
     node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
     int size=getSize(root);
     cout<<"size of tree is "<<size<<endl;
     return 0;

}