#include <stdio.h>
#include<string.h>
void main()
{
  struct employee
  {
  
  char name[20];
  char empid[20];
  int salary;
  };
  struct employee f[6];
  struct employee temp;
  int i,n,j;
  printf("enter number of employee: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("name of employee %d: ",i+1);
    scanf("%s",f[i].name);
    printf("empid: ");
    scanf("%s",f[i].empid);
    printf("salary: ");
    scanf("%d",&f[i].salary);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
    if(strcmp(f[j].name,f[j+1].name)>0)
    {
      temp=f[j];
      f[j]=f[j+1];
      f[j+1]=temp;
    }
    }
  }
  printf("name\t\tid\tsalary\n");
  for(i=0;i<n;i++)
  {
    printf("%s\t\t%s\t%d\n",f[i].name,f[i].empid,f[i].salary);
  }
  
  
 
}