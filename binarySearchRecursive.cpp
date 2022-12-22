//this is recursive method of binary search.
//time complexity is O(logN).
//space complexity is O(n), because of n+1 function call during recursion and stored in stack.
// so the recursive solution is less effective than iterative .
#include<iostream>
using namespace std;
int binarysearch(int arr[],int low,int high,int key)
{
int mid=(low+high)/2;
if(low<=high)
{
if(arr[mid]==key)
{
    return mid;
}
else if (arr[mid]>key)
{
    binarysearch(arr,mid+1,high,key);
}
else {
    binarysearch(arr,low,mid-1,key);

}
}
else return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"entered array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    int key,low=0,high=n-1;
    cout<<"enetr the element to find:"<<endl;
    cin>>key;
      cout<<binarysearch(arr,low,high,key);
return 0;
}