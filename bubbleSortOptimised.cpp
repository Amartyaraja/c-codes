 //here time complexity is O(n^2),but if array is already sorted or partially sorted 
 //then it will not execute the code for O(n^2).
 //best case(if array is already sorted), it takes only O(n) time ./
  
  
  
  #include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool swapped=false;
        for( int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }


        }
        if(swapped==false)
        break;
    }
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the no, of elements of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    return 0;
}