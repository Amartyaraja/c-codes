#include<iostream>
#include<vector>
using namespace std;
struct node
{int key;
node*left,*right;
node(int k)
{
    key=k;
    left=right=NULL;
}
    /* data */
};
void inorder(node*root, vector<node*> &v)
{
    if(root==NULL)
    return;
    inorder(root->left,v);
     
    inorder(root->right,v);
    v.push_back(root);

}
   
node* floor(node*root,int x)
{   vector<node*> v;
node*temp=NULL;
      inorder(root,v);
      int size=v.size();
      for(int i=0;i<size;i++)
    {
       if(v[i]->key<=x)
       {
         temp=v[i];
       }
       
    }
    return temp;

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
    int x;
    cout<<"enter the element for which floor to be searched :"<<endl;
    cin>>x;
     node* temp=floor(root,x);
     cout<<temp->key;
    
   
    return 0;
}