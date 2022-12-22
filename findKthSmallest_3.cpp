#include<iostream>
#include<vector>
using namespace std;
struct node{
    int key;                 ///exact same as 2nd method only here is return the node of kth  smallest 
    node*left,*right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
void inorder(node*root,vector<node*>&v)
{
    if(root==NULL)
    return;
    inorder(root->left,v);
      v.push_back(root);
    inorder(root->right,v);
}
node* findKth(node*root,int k)
{
    vector<node*>v;
    inorder(root,v);
      return v[k-1];

}

int main()
{
     node*root=new node(50);
    root->left=new node(30);
    root->right=new node(70);
    root->left->left=new node(25);
    root->left->right=new node(40);
    root->right->right=new node(75);
    root->right->left=new node(55);
    int k;
    cout<<"enter the value of k:"<<endl;
    cin>>k;
      node*temp=findKth(root,k);
      cout<<temp->key;
    return 0;


}