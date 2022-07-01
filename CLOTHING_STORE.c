#include<stdio.h>
int main()
{
    int n,i,arr[1000],c=1,p=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {   c=1;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {  
                
                    c++;
                    arr[j]=-1;
                }
            }
            p=p+c/2;
        }
    }
    printf("%d",p);

}