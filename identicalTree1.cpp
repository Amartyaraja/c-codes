#include<iostream>
#include<vector>
using namespace std;
struct node
{
    int key;
    node*left,*right;
    node(int k)
    {key=k;
    left=right=NULL;
    }
};
vector<int> preorder(node*root)
{  vector<int> v;
    if(root==NULL)
    {
        return v;
    }
    v.push_back(root->key);
    preorder(root->left);
    preorder(root->right);

}
vector<int> inorder(node*root)
{
    vector<int> v;
    if(root==NULL)
    return v;
    inorder(root->left);
    v.push_back(root->key);
    inorder(root->right);
}
bool isIdentical(node*root1,node*root2)
{
    vector<int> v1=preorder(root1);
    vector<int> v2=preorder(root2);
    vector<int> v3=inorder(root1);
    vector<int> v4=inorder(root2);
    if(v1.size()==v2.size())
    {
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]==v2[i])
            {
                continue;
            }
            else

        }
    }
    
    
}

int main()
{
       
          node*root1=new node(10);
    root1->left=new node(20);
    root1->right=new node(30);
    root1->left->left=new node(40);
    root1->left->right=new node(50);
    root1->right->right=new node(60);
    root1->left->right->left=new node(70);
     node*root2=new node(10);
    root2->left=new node(20);
    root2->right=new node(30);
    root2->left->left=new node(40);
    root2->left->right=new node(50);
    root2->right->right=new node(60);
    root2->left->right->left=new node(70);
    isIdentical(root1,root2);
    
    return 0;

}