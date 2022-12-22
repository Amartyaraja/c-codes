#include<iostream>
using namespace std;
struct node{
    int key;
    node*left,*right;
    node(int k)
    {
        key=k;         // space--> O(n),time-->O(h+k)
        left=right=NULL;
    }
};
int count =0;
 void findKth (node*root,int k)
{
if(root==NULL)
return;
  else
   {
    findKth(root->left,k);
    count++;
    if(count==k)
    {
    cout<<root->key;
    return;
    
    
    }
    findKth(root->right,k);
   }
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