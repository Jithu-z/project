#include<stdio.h>
void main()
{
    int i,j,n,c=0;
    printf("enter limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(c%2==0)
        {
        for(j=0;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("+");
            }
            else
            {
                printf("-");
            }
        }
        }
        else
        {
            for(j=0;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("-");
            }
            else
            {
                printf("+");
            }
        }

        }
        c++;
        printf("\n");
    }
}