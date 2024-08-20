#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,n,i;
    printf("enter limit: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("\n%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}