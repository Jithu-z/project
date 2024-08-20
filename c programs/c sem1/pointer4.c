#include<stdio.h>
void main()
{
    int a[30],*p,i,s=0,n;
    printf("enter limit: ");
    scanf("%d",&n);
    p=&a[0];
    printf("enter %d elements:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=*(p+i);
    }
    printf("sum=%d",s);
}