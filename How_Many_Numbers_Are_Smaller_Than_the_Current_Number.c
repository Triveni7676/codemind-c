#include<stdio.h>
int main()
{
    int n,i,j,k=0,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]<arr[i] && i!=j)
            {
                k++;
            }
        }
        printf("%d ",k);
    }
}