#include<stdio.h>
int main()
{
    int a[100],i,j,k=0,c,n,s=0;
  //  float s=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   // scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]==-1)
        { 
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[i]=-1;
            }
        }
        if(a[i]%2==0 && c==1)
        {
            k++;
           // printf("%d ",a[i]);
           s=s+a[i];
        
        }
    }
    printf("%d",s);
}