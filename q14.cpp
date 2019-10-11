#include<iostream>                        //intersection of two arrays
using namespace std;
int main()
{
    int m,n;                //taking two variables for size of arrays
    cout<<"enter size of first array : ";
    cin>>m;
    int arr1[m];
    cout<<"enter elements of array : ";
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    cout<<"enter size of second array : ";
    cin>>n;
    int arr2[n];
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    int x=m<n?m:n,res[x],k=0,i=0,j=0;
    while(i<m && j<n)                        //Using Concept of two pointers
    {
        if(arr2[j]>arr1[i])
            i++;
        else if(arr2[j]<arr1[i])
            j++;
        else
        {
            res[k]=arr1[i];
            i++;j++;k++;
        }
    }
    for(int i=0;i<k;i++)
        cout<<res[i]<<" ";
    return 0;
}
