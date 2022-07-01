#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,m,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            break;
        }
        else
        {
            sum=sum+arr[i];
        }
    }
    p=sum+m;
    printf("%d",p);
}