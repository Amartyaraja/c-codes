  //insertion in array.
  // time complexity is O(n).
  //space complexuty is O(1).
//insertion at begg. takes O(1),while insertion at end takes O(n).

#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";

    
}
cout<<endl;
}
int insert(int arr[],int p,int x,int n,int cap)
{


    if(n==cap)
    {
        cout<<"no space to insert:"<<endl;
        return n;
    }
    else{
      for(int i=n-1;i>=p;i--)
      {
        arr[i+1]=arr[i];
      }
      arr[p]=x;
      return (n+1);
}
}

int main()
{    int cap;
 cout<<"enter the capacity of array:"<<endl;
 cin>>cap;
    
    
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    
int p;
cout<<"index to insert:"<<endl;
cin>>p;
int x;
cout<<"element to be inserted:"<<endl;
cin>>x;
    
    int arr[cap];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"entered array is:"<<endl;
print(arr,n);
  n=insert(arr,p,x,n,cap);
  cout<<"resultant array is:"<<endl;
  print(arr,n);
return 0;

}
