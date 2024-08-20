#include<stdio.h>
void sum(int a[],int n);
void main()
{
    int a[10],n,i;
    printf("enter limit of array: ");
    scanf("%d",&n);
    printf("enter %d elements:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n);
}
void sum(int a[],int n)
{
    int se=0,so=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            se+=a[i];
        }
        else
        {
            so+=a[i];
        }
    }
    printf("sum of odd numbers=%d\nsum of even numbers=%d",so,se);
}