#include<stdio.h>
int main()
{
    int a,b,*pa,*pb;
    printf("enter two numbers:-\n");
    scanf("%d%d",&a,&b);
    pa=&a;
    pb=&b;
    if(*pa>*pb)
    {
        printf("%d is largest",*pa);
    }
    else{
        printf("%d is largest",*pb);
    }
}