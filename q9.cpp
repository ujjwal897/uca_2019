#include<iostream>                        //maximum contiguous subarray
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max=arr[0],sum=arr[0],a;
    for(int i=1;i<n;i++)
    {
        a=sum+arr[i];
        if(a>arr[i])                    //sum=a>arr[i]?a:arr[i]
            sum=a;
        else if(arr[i]>a)
            sum=arr[i];
        if(sum>max)
            max=sum;
    }
    cout<<max;
    return 0;
}
