#include<iostream>              //upper and lower bound
using namespace std;
int main()
{
    int n,s,e;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter starting of range : ";
    cin>>s;
    cout<<"enter ending of range : ";
    cin>>e;
    int l=0,r=n-1,ub,lb,mid;
    while(l<r)
    {
        mid=((l+r)/2);
        if(arr[mid]>=s)
            r=mid;
        else
            l=mid+1;
    }
    lb=l;
    l=0;r=n-1;
    while(l<r)
    {
        mid=((l+r)/2);
        if(arr[mid]<e)
            l=mid+1;
        else
            r=mid;
    }
    ub=r;
    cout<<ub-lb+1;
    return 0;
}
