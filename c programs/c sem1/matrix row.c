#include<stdio.h>
void main()
{
    int a[30][30],m,n,i,j,sr=0,sc=0;
    printf("enter rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("enter %d elements\n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n the matrix is:-\n");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sr=0;
        for(j=0;j<n;j++)
        {
            sr+=a[i][j];
        }
        printf("\nsum of row%d=%d\n",i+1,sr);
    }
     for(i=0;i<n;i++)
    {
        sc=0;
        for(j=0;j<m;j++)
        {
            sc+=a[j][i];
        }
        printf("\nsum of column%d=%d\n",i+1,sc);
    }


}