//this is itretive method of binary search.
//it has time complexity of O(logN).
//space  complexity of O(n).
//this method has one condition that the array should be sorted.


#include<iostream>
using namespace std;
  
   int binarySearch(int arr[],int n,int key)
  {
       int low=0; int high=n-1;int mid;
       while(low<=high)
       {
         mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            low=mid+1;
        }
        else
           { high=mid-1;
       }
  }
  return -1;
  }
int main()
{  int n;
cout<<"enter the size of arrray"<<endl;
cin>>n;
    int arr[n];
    cout<<"enter the elements array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"entered array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    int key;
    cout<<"enter the key:"<<endl;
    cin>>key;
   cout<<"key found at  "<< binarySearch(arr,n,key);

    return 0;
}