#include<iostream>
using namespace std;
void print(int arr[],int n)
{ 
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int deletion(int arr[],int n,int cap,int x)
{
if(x>=n)
{   
    cout<<"no deletion :"<<endl;
    return n;
}
else{

    for(int i=x;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}
}
int main()
{    
    int cap;
    cout<<"enter the capacity of array:"<<endl;
    cin>>cap;
    int arr[cap];

    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int x;
    cout<<"enter the index to delete:"<<endl;
    cin>>x;
    cout<<"enter the elements of array:"<<endl;
    for(int  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"entered array is :"<<endl;
    print(arr,n);
      n=deletion(arr,n,cap,x);
      print(arr,n);
    return 0;

}