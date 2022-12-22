#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,5,3,77,55,33,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}