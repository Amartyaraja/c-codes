     #include<iostream>
#include<queue>
using namespace std;
struct node
{
    int key;
    node*left,*right;
    node(int k=0)
    {
        key=k;
        left=right=NULL;
    }

    /* data */
};
void preorder(node*root)
{
    if(root==NULL)
    return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
    

}

void inorder(node*root)
{
    if(root==NULL)
    return;
    else{
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
   
}
void postorder(node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<(root->key)<<" ";
    }
}


void create()
{
    queue<node*> q;
       node*root=new node();;
       int x;
    cout<<"enter the value of root"<<endl;
    cin>>x;
    root->key=x;
    root->left=root->right=NULL;
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
       cout<<"enter the left of "<<temp->key<<endl;
        cin>>x;
        if(x!=-1)//we are treating -1 as NULL.
        {   
            node*t=new node();
            t->key=x;
            t->left=t->right=NULL;
            temp->left=t;
            q.push(t);
            
        }
        cout<<"enter the right of "<<temp->key<<endl;
        cin>>x;
        if(x!=-1)
        {
            node*t2=new node();
            t2->key=x;
            t2->left=t2->right=NULL;
            temp->right=t2;
            q.push(t2);


        }
        
        
        

    }
cout<<"preorder: ";
    preorder(root);
    cout<<endl<<"inorder :";
    inorder(root);
    
  cout<<endl<<"postorder :";
    postorder(root);


}
int main()
{
    create();
    return 0;
}
