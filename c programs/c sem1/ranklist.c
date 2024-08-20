#include<stdio.h>
void main()
{
   struct student
   {
    int rno;
    char author[20];
    int marks[5];
    int price;
   };
   int i,j,n,k;
   struct student s[10];
   struct student temp;
   printf("enter number of students: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("enter details of student %d(roll no and author):-\n",i+1);
    scanf("%d%s",&s[i].rno,s[i].author);
    printf("enter marks of 5 subjects:-\n");
    for(j=0;j<5;j++)
    {
        scanf("%d",&s[j].marks);
    }
   }
   for(i=0;i<n;i++)
   {
    s[i].price=0;
    for (j=0;j<5;j++)
    {
        s[i].price+=s[i].marks[j];
    }
    
   }
   printf("ROLL NO\t author\t\tMARKS\n");
   for(i=0;i<n;i++)
   {
    printf("%d\t%s\t\t%d\n",s[i].rno,s[i].author,s[i].price);
   }

} 