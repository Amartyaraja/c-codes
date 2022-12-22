//it also have time complexity of O(n^2).
//but it takes auxiliary space of O(1).
//here if array is sorted then also it takes O(n^2).




#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_ele=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ele])
            {
                min_ele=j;

            }

        }
        swap(arr[min_ele],arr[i]);
    }
    cout<<"sorted array is:"<<endl;
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