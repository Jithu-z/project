#include<stdio.h>
void main()
{
    int a[10][10],sp[10][3],i,j,m,n,k=1;    
    printf("define row and column of original matrix:-\nrow= ");
    scanf("%d",&m);
    printf("column=");
    scanf("%d",&n);
    printf("\n create a %dX%d matrix\nenter %d elements:-\n",m,n,m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nSparse matrix:-\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    /*TRIPLET FORM REPRESENTATION*/
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                sp[k][0]=i;
                sp[k][1]=j;
                sp[k][2]=a[i][j];
                k++;
            }
        }
    }
    sp[0][0]=m;
    sp[0][1]=n;
    sp[0][2]=k-1;
    printf("\nTRIPLET REPRESENTATION:-\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sp[i][j]);
        }
        printf("\n");
    }

}