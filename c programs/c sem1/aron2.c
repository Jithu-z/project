#include<stdio.h>
void add();
void pro();
void trans();
void main()
{
  int c;
  char ch;
    printf("\n1. addition\n");
    printf("2.multiplication\n");
    printf("3.transpose\nenter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
    {
      add();
      break;
    }
    case 2:
    {
      pro();
      break;
    }
    case 3:
    {
      trans();
      break;
    }
    default:
    {
      printf("invalid choice entered");
      break;
    }
    }
}
void add()
{
  int a[30][30],b[30][30],m1,n1,m2,n2,i,j;
  char ch;
  printf("enter rown and columns of matrix A\n:-");
  scanf("%d%d",&m1,&n1);
  printf("enter rown and columns of matrix B\n:-");
  scanf("%d%d",&m2,&n2);
  if(m1!=m2 || n1!=n2)
  {
    printf("dimensional error");
  }
  else
  {
   printf("enter elements of matrix A");
  for(i=0;i<m1;i++)
  {
    for(j=0;j<n1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter elements of matrix B");
  for(i=0;i<m2;i++)
  {
    for(j=0;j<n2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  printf("sum of matrix A and B :-\n");
  for(i=0;i<m1;i++)
  {
    for (j=0;j<n1;j++)
    {
      printf("%d\t",a[i][j]+b[i][j]);
    }
    printf("\n");
  }
  }
  printf("\n continue?('y'/'n'): ");
    scanf(" %c",ch);
    if(ch=='y')
    {
        main();
    }
}
void pro()
{
  int a[30][30],b[30][30],c[30][30],m1,n1,m2,n2,k=0,i,j;
  char ch;
  printf("enter rown and columns of matrix A\n:-");
  scanf("%d%d",&m1,&n1);
  printf("enter rown and columns of matrix B\n:-");
  scanf("%d%d",&m2,&n2);
  if(n1!=m2)
  {
    printf("dimensional error");
  }
  else
  {
    printf("enter elements of matrix A");
  for(i=0;i<m1;i++)
  {
    for(j=0;j<n1;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter elements of matrix B");
  for(i=0;i<m2;i++)
  {
    for(j=0;j<n2;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
    for(i=0;i<m1;i++)
    {
      k=0;
      for(j=0;j<n1;j++)
      {
        c[i][j]+=a[i][k]*b[k][j];
        k++;
      }
    }
    printf("product of A and B:-\n");
    for(i=0;i<m1;i++)
    {
      for(j=0;j<n1;j++)
      {
        printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
  }
   printf("\n continue?('y'/'n'): ");
    scanf(" %c",ch);
    if(ch=='y')
    {
        main();
    }
}
void trans()
{
  int a[30][30],b[30][30],m1,n1,i,j;
  char ch;
  printf("enter rown and columns of matrix A\n:-");
  scanf("%d%d",&m1,&n1);
  printf("enter array elements:-\n");
  for(i=0;i<m1;i++)
  {
    for(j=0;j<n1;j++)
    {
    scanf("%d",&a[i][j]);
    }
  }
  printf("matrix A:-\n");
  for(i=0;i<m1;i++)
  {
    for(j=0;j<n1;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<n1;i++)
  {
    for(j=0;j<m1;j++)
    {
      b[i][j]=a[j][i];
    }
  }
  printf("\nTranspose of A:-\n");
  for(i=0;i<n1;i++)
  {
    for(j=0;j<m1;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
   printf("\n continue?('y'/'n'): ");
    scanf(" %c",ch);
    if(ch=='y')
    {
        main();
    }
}
