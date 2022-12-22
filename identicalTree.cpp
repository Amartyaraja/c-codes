#include<iostream>
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
bool isIdentical(node*root1,node*root2)
{   if(root1==NULL||root2==NULL)
return root1==root2;
return (root1->key==root2->key)&&isIdentical(root1->left,root2->left)&&isIdentical(root1->right,root2->right);

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
    //root2->left->right->left=new node(70);
     bool x=isIdentical(root1,root2);
     cout<<x;
    return 0;
}