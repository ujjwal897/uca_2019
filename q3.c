#include<stdio.h>                   //max(j-i) where a[j]>a[i]
#include<stdlib.h>
struct res
{
	int value;
	int index;
};
int cmp(const void* a,const void* b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	int n,i;
	printf("Enter the no. of elements in the array : \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements for the array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	struct res arr[n];
	for(i=0;i<n;i++)
	{
		arr[i].value=a[i];
		arr[i].index=i;
	}
	qsort(arr,n,sizeof(arr[0]),cmp);
	int min=arr[0].index,max=0;
	for(i=0;i<n;i++)
	{
		if(arr[i].index<min)
		{
			min=arr[i].index;
		}
		if(arr[i].index-min>max)
		{
			max=arr[i].index-min;
		}
	}
	printf("The max(j-i) where arr[j]>arr[i] is %d",max);
	return 0;
}
