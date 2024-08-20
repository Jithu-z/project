#include<stdio.h>
#include<string.h>
void sort(int n,char str[50][100]);
void main()
{
    
    int n,i;
    char str[50][100];
    printf("enter number of strings: ");
    scanf("%d",&n);
    printf("enter %d strings\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%s",str[i]);
    }
    sort(n,str);   
}
void sort(int n,char str[50][100])
{
   char temp[100];
   int i,j;
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
      if(strcmp(str[j],str[j+1])>0)
      {
        strcpy(temp,str[j]);
        strcpy(str[j],str[j+1]);
        strcpy(str[j+1],temp);
      }
    }
   }
   printf("\n sorted strings:-\n");
   for(i=0;i<n;i++)
   {
    printf("%s\n",str[i]);
   }
}
