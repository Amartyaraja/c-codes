#include<iostream>
#include<queue>
using  namespace std;
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
int levelWithMaxSum(node*root)
{    int maxSum=0;
    queue<node*> q;
    if(root==NULL)
    return 0;
    q.push(root);
    while (!q.empty())
    {  
        int size=q.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            node*temp=q.front();
            q.pop();
            sum+=temp->key;
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
        maxSum=max(maxSum,sum);
    
      
    }
    return maxSum;
    
}

int main()
{
     node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
        cout<<"maximum sum in a level is "<<levelWithMaxSum(root);
    return 0;


}
