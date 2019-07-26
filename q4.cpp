#include<iostream>                   // rotating an array k times
using namespace std;
int main()
{
    int n,k,temp,x;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array :";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter no of rotations :";
    cin>>k;
    while((k%n)!=0)
    {
        temp=arr[n-1];
        for(int i=n-2;i>=0;i--)
            arr[i+1]=arr[i];
        arr[0]=temp;
        k--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
