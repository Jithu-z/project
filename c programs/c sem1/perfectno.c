#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }

    }
    if(sum==n)
    {
        printf("%d is a perfect number",n);
    }
    else
    {
        printf("not a perfect number",n);
    }    
}