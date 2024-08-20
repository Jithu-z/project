#include <stdio.h>
void main()
{
    int a[20],i,n,j,c;
    printf("enter the limit: ");
    scanf("%d",&n);
    printf("enter %d values:-\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;

        }
    }
    }
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}