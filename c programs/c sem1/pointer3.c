#include<stdio.h>
void main()
{
    int i,j,c=1;
    char *p,str[50];
    printf("enter sentence: ");
    gets(str);
    p=str;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)==' ')
        {
        c++;
        }
    }
    printf("number of words in string=%d",c);
}