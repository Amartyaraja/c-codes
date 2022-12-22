  //search in an array(unsorted) by linear search method.
  // time complexity is O(n).
  // space complxity is O(1).
  //this method usually used for unsorted array.

  
  #include<iostream>
using namespace std;
int searchLinear(int arr[],int x,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"element to be searched:";
    cin>>key;
     int y=searchLinear(arr,key,n);
     cout<<"element found at index "<<y;
    return 0;


}