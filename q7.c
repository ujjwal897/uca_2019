#include <stdio.h>                //spiral of a matrix
int main()
{
    printf("Enter size of matrix : ");
    int n;
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements of matrix : ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             scanf("%d",&arr[i][j]);
        }
    }
    int dir,L,R,T,B;
    dir=L=T=0;
    R=B=(n-1);
    while(L<=R && T<=B)
    {
        if(dir==0)
        {
            for(int i=L;i<=R;i++)
            {
                printf("%d ",arr[T][i]);
            }
            T++;
        }
        else if(dir==1)
        {
            for(int i=T;i<=B;i++)
            {
                printf("%d ",arr[i][R]);
            }
            R--;
        }
        else if(dir==2)
        {
            for(int i=R;i>=L;i--)
            {
                printf("%d ",arr[B][i]);
            }
            B--;
        }
        else if(dir==3)
        {
            for(int i=B;i>=T;i--)
            {
                printf("%d ",arr[i][L]);
            }
            L++;
        }
        dir=(dir+1)%4;
    }
    return 0;
}
