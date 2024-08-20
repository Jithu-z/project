#include<stdio.h>
void main()
{
    int i=0,t1,t2,j=0;
    struct polynomialA{
        int c[10];int e[10];
    }pa[10];
    struct polynomialB{
        int c[10];int e[10];
    }pb[10];
    struct polynomialC{
        int c[10];int e[10];
    }pc[10];
    printf("enter number of terms in pA: ");
    scanf("%d",&t1);
    for(i=0;i<t1;i++)
    {
        printf("\nenter coef. and exp. of term %d\n",i+1);
        scanf("%d%d",&pa[i].c[i],&pa[i].e[i]);
    }
     printf("enter number of terms in pB: ");
    scanf("%d",&t2);
    for(i=0;i<t2;i++)
    {
        printf("\nenter coef. and exp. or term %d\n",i+1);
        scanf("%d%d",&pb[i].c[i],&pb[i].e[i]);
    }
    printf("The polynomial A is:- ");
    for(i=0;i<t1;i++)
    {
        if(i==t1-1 && pa[i].e[i]==0)
        {
            printf("%d",pa[i].c[i]);
        }
        else if(i==t1-1)
        {
            printf("%dx^%d",pa[i].c[i],pa[i].e[i]);
        }
        else if(pa[i].e[i]==0)
        {
            printf("%d+",pa[i].c[i]);
        }
        else
        {
            printf("%dx^%d+",pa[i].c[i],pa[i].e[i]);
        }
    }
    printf("\nThe polynomial B is:-\n");

    for(i=0;i<t2;i++)
    {
        if(i==t2-1 && pb[i].e[i]==0)
        {
            printf("%d",pb[i].c[i]);
        }
        else if(i==t2-1)
        {
            printf("%dx^%d",pb[i].c[i],pb[i].e[i]);
        }
        else if(pb[i].e[i]==0)
        {
            printf("%d+",pb[i].c[i]);
        }
        else
        {
            printf("%dx^%d+",pb[i].c[i],pb[i].e[i]);
        }
    }
    int k=0;
                                                /*ADDITION OPERATION BEGINS*/
    while(i<t1 && j<t2)
        {
            if(pa[i].e[i]==pb[j].e[j])
            {
                pc[k].c[k]=pa[i].c[i]+pb[j].c[j];
                pc[k].e[k]=pa[i].e[i];
                i++;
                j++;
                k++;
            }
            else if(pa[i].e[i]>pb[j].e[j])
            {
                pc[k].c[k]=pa[i].c[i];
                pc[k].e[k]=pa[i].e[i];
                i++;
                k++;
            }
            else if(pa[i].e[i]<pb[j].e[j])
            {
                pc[k].c[k]=pb[j].c[j];
                pc[k].e[k]=pb[j].e[j];
                j++;
                k++;
            }
        }
        /*while(i<t1)
        {
            pc[k].c[k]=pa[i].c[i];
            pc[k].e[k]=pa[i].e[i];
            i++;k++;
        }
        while(j<t2)
        {
            pc[k].c[k]=pb[j].c[j];
            pc[k].e[k]=pb[j].e[j];
            j++;k++;
        }*/
        printf("\nThe polynomial sum is:-\n");

        for(i=0;i<k;i++)
        {
            if(i==k-1 && pc[i].e[i]==0)
            {
                printf("%d",pc[i].c[i]);
            }
            else if(i==k-1)
            {
                printf("%dx^%d",pc[i].c[i],pc[i].e[i]);
            }
            else if(pc[i].e[i]==0)
            {
                printf("%d+",pc[i].c[i]);
            }
            else
            {
                printf("%dx^%d+",pc[i].c[i],pc[i].e[i]);
            }
        }

    }