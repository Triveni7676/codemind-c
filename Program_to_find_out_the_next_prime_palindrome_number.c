#include<stdio.h>
int main()
{
    int i,n,d,r=0,t,c=0,j;
    scanf("%d",&n);
    for(i=n+1;i<=n+10000;i++)
    {
        c=0;
        t=i;
        r=0;
        while(t!=0)
        {
            d=t%10;
            r=r*10+d;
            t=t/10;
        }
        if(r==i)
        {
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    //printf("%d",i);
                    c++;
                }
            }
            if(c==0)
            {
                printf("%d",i);
                break;
            }
        }
    }
}