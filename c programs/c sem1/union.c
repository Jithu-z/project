#include <stdio.h>

void main()
{
  union booklist
  {
  
  char author[20];
  char bkid[20];
  char pub[20];
  int price;
  };
  struct booklist f[6];
  int i,n,j;
  printf("enter number of book: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("author of student %d: ",i+1);
    scanf("%s",f[i].author);
    printf("bkid: ");
    scanf("%s",f[i].bkid);
    printf("enter marks of 5 subjects\n");
    for(j=0;j<5;j++)
    {
      scanf("%d",&f[i].marks[j]);
    }
  }
  for(i=0;i<n;i++)
  {
    f[i].price=0;
    for(j=0;j<5;j++)
    {
      f[i].price+=f[i].marks[j];
    }
  }
  for(i=0;i<n-i;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
    if(f[j].price<f[j+1].price)
    {
      temp=f[j];
      f[j]=f[j+1];
      f[j+1]=temp;
    }
    }
  }
  printf("author\t\tuid\ttotal mark\trank\n");
  for(i=0;i<n;i++)
  {
    printf("%s\t\t%s\t%d\t%d\n",f[i].author,f[i].bkid,f[i].price,c);
    c++;
  }
  
  
 
}