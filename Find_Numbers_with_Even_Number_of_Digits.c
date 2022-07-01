#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],i,n,k=0,count=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i]>0)
        {
            d=arr[i]%10;
            c+=1;
            arr[i]=arr[i]/10;
        }
        if(c%2==0)
        {
            k++;
        }
    }
    printf("%d",k);
}