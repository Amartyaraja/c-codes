#include<iostream>
#include<vector>
using namespace std;
struct node{
    int key;
    node*left,*right;
    node(int k)            //space--> O(n), time-->O(n)
    {
        key=k;
        left=right=NULL;
    }
};
void inorder(node*root,vector<int>&v)
{
    if(root==NULL)
    return;
    inorder(root->left,v);
      v.push_back(root->key);
    inorder(root->right,v);
}
void findKth(node*root,int k)
{
    vector<int>v;
    inorder(root,v);
    cout<<v[k-1];

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
    findKth(root,k);
    return 0;


}