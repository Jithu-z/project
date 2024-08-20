 int a[10][10],b[10][10],sp[10][3],i,j,m1,n1,k=1,sptr[10][3],m2,n2;    
    printf("define row and column of original matrix A:-\nrow= ");
    scanf("%d",&m1);
    printf("column=");
    scanf("%d",&n1);
    printf("\n create a %dX%d matrix\nenter %d elements:-\n",m1,n1,m1*n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("define row and column of original matrix B:-\nrow= ");
    scanf("%d",&m2);
    printf("column=");
    scanf("%d",&n2);
    printf("\n create a %dX%d matrix\nenter %d elements:-\n",m2,n2,m2*n2);
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nSparse matrix:-\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("\nSparse matrix:-\n");
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    