#include<stdio.h>
void main()
{
    int a[20],lim,pos,n,i;
    printf("enter the limit: ");
    scanf("%d",&lim);
    for(i=0;i<lim;i++)
    {
        printf("enter value %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("enter element and position to be inserted\n");
    scanf("%d%d",&n,&pos);
    for(i=lim;i>=0;i--)
    {
        if(i!=pos-1)
        {
            a[i+1]=a[i];
        }
        else
        {
            a[i+1]=a[i];
            a[i]=n;
            break;
        }
    }
    printf("\n new array:-");
    for(i=0;i<=lim;i++)
    {
        printf("\n%d\n",a[i]);
    }
}