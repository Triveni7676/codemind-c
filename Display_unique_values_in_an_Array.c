#include<stdio.h>
int main()
{
    int arr[100],i,j,n,c,r,k=0,max=0,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
               c++;
           }
        }
        if(c==1)
        {
           b[k]=arr[i];
           k++;
        }
    }
   if(k>0)
   {
       for(i=0;i<k;i++)
            printf("%d ",b[i]);
   }
   else
   {
       printf("-1");
   }
}