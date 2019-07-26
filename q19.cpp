#include<iostream>                            //finding floor of square root of a given number
using namespace std;
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int sq,mid,l=0,r=n-1,ans;
    while(l<r)
    {
        mid=((l+r)/2);
        sq=(mid+1)*(mid+1);
        if(sq<=n)
        {
            ans=mid+1;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<ans;
    return 0;
}
