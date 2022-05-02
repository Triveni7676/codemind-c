 #include<stdio.h>
 int main()
 {
     int arr[100],n,i,j,m=0;
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
             if(arr[i]%2!=0)
             {
                 if(arr[i]==arr[j])
                 {
                     c++;
                 }
             }
         }
          if(c==1)
             {
                 m++;
             }
     }
     printf("%d",m);
 }