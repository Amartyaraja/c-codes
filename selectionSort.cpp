//i this sorting algorithm the time complexity is O(n^2).
//but it is also taking the auxiliary space of O(n).





#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{ 
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ele=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[min_ele])
            {
                min_ele=j;
            }

        }
        temp[i]=arr[min_ele];
        arr[min_ele]='INF';
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

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
    cout<<"given array:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionsort(arr,n);
    return 0;

}