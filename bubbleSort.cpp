//in this algorithm, the time complexity isO(n^2) for all arrays.
//if array is already sorted then it will execute code for O(n^2).


#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);

            }
        }
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
    cout<<"given array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,n);
    
    
    return 0;

}