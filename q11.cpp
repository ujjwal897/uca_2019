#include<iostream>                //remove duplicates
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
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    cout<<j+1;
    return 0;
}
