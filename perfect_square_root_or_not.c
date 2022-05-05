#include<stdio.h>
#include<math.h>
int main()
{
    int n,res,sum;
    scanf("%d",&n);
    res=sqrt(n);
    sum=n-(res*res);
    if(sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}