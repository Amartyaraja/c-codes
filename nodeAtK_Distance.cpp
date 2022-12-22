#include<iostream>
#include<queue>

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
void nodeKdist(node*root,int k)
{  int count=0;
    queue<node*> q;
    if(root==NULL)
    return;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        count++;
        for(int i=0;i<size;i++)
        {
             node*temp=q.front();
             q.pop();
             
             if(count==k+1)
             {
                cout<<temp->key<<" ";
             }
             if(temp->left!=NULL)
             {
                q.push(temp->left);
             }
             if(temp->right!=NULL)
             {
                q.push(temp->right);
             }

        }
        
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
    int k;
    cout<<"enter the vfalue of k :"<<endl;
    cin>>k;
    nodeKdist(root,k);
    return 0;

}