#include<stdio.h>
int main()
{
	int arr[100],n,i,j,c=0,avg,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+arr[i];
	    
	}
	avg=sum/n;
	for(i=0;i<n;i++)
	{
	    if(arr[i]<=avg)
	    {
	        c++;
	    }
	}
	printf("%d",c);
}