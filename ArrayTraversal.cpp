#include<iostream>
using namespace std;

void traverse(int arr[], int n)
{
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}
int main()
{
   int n;
   cout<<"enter the value of n:";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];

   }
   traverse(arr,n);
   return 0; 
}
