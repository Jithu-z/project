#include<stdio.h>
void main()
{
    int i,j,c=0;
    char *p,str[50];
    printf("enter string: ");
    gets(str);
    p=str;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)!=' ')
        {
        c++;
        }
    }
    printf("length of string=%d",c);
}