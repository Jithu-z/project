#include<stdio.h>
void main()
{
    int i,t1;
    struct polynomial{
        int c[10];int e[10];
    }p[10];
    printf("enter number of terms: ");
    scanf("%d",&t1);
    for(i=0;i<t1;i++)
    {
        printf("\nenter coef. and exp. or term %d\n",i+1);
        scanf("%d%d",&p[i].c[i],&p[i].e[i]);
    }
    printf("The polynomial is:-\n");
    for(i=0;i<t1;i++)
    {
        if(i==t1-1 && p[i].e[i]==0)
        {
            printf("%d",p[i].c[i]);
        }
        else if(i==t1-1)
        {
            printf("%dx^%d",p[i].c[i],p[i].e[i]);
        }
        else if(p[i].e[i]==0)
        {
            printf("%d+",p[i].c[i]);
        }
        else
        {
            printf("%dx^%d+",p[i].c[i],p[i].e[i]);
        }
    }
}