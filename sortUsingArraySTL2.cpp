 #include<iostream>
#include<algorithm>
using namespace std;
int main()
{    
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of the array:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   sort(arr,arr+n);
   // for sorting only few elements.
   //sort(arr,arr+3);
  for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}