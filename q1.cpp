#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter group size:";
    cin>>k;
    for(int i=0;i<n;i+=k)
    {
        if((i+k)<=n)
        {
            for(int j=0;j<k/2;j++)
                {
                    int temp=arr[j+i];
                    arr[j+i]=arr[i+k-1-j];
                    arr[i+k-1-j]=temp;
                }
        }
        else
        {
            for(int j=0;j<(n-i)/2;j++)
                {
                    int temp=arr[j+i];
                    arr[j+i]=arr[n-1-j];
                    arr[n-j-1]=temp;
                }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
