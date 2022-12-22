#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the 3 nos.";
    cin>>x>>y>>z;
    if(x>y && x>z)
    cout<<"greatest no. is "<<x;
    else if(y>z)
    cout<<"gratest no. is "<<y;
    else 
    cout<<"greatest no. is"<<z;
    return 0;
}