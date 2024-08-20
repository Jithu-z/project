#include<stdio.h>
void main()
{
   int n,a[10],k=0,i;
   printf("enter decimal number : ");
   scanf("%d",&n);
   for(i=n;i>=1;i/=2)
   {  
        a[k]=i%2;
        k++;
   }
   printf("Binary format :-\n");
   for(i=k-1;i>=0;i--)
   {
    printf("%d",a[i]);
   }
}