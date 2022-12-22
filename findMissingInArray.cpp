//timecomplexity is O(n).
//space complexity is O(1).
//condition is that yhe array should be sorted.

#include<iostream>
using namespace std;
int sumnatural(int n)
{
    return (n*(n+1))/2;
}
void print(int arr[],int  n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int  arraySum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {

        s=s+arr[i];
    }
    return s;
}
int main()
{
    int cap,n;
    cout<<"enter the capacity and size of array:"<<endl;
    cin>>cap>>n;
    int arr[cap];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=sumnatural(n);
    print(arr,n);
    int sum2=arraySum(arr,n);
    cout<<"missing element is:"<<endl;
    cout<<sum-sum2;


    return 0;

}