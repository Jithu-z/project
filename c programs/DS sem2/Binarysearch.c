#include<stdio.h>
int binsearch(int f,int a[10],int low,int high);
void main()
{
    int i,n,a[10],j,c,f,k;
    /*ARRAY CREATION*/
    printf("enter total array elements: ");
    scanf("%d",&n);
    printf("enter array elements:-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n ARRAY:-\n[");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
        if(i==n-1)
        {
            printf("]\n");
        }
    }
    /*ARRAY SORTING*/
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;

            }
        }
    }
    printf("\nSORTED ARRAY:-\n[");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(i==n-1)
        {
            printf("]");
        }
    }
    printf("enter element to search:-");
    scanf("%d",&f);
    k=binsearch(f,a,0,n-1);
    if(k==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at index %d",k);
    }
}
int binsearch(int n,int a[10],int low,int high)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(n==a[mid])
        {
            return mid;
        }
        else if(n>a[mid])
        {
            return binsearch(n,a,mid+1,high);
        }
        else if(n<a[mid])
        {
            return binsearch(n,a,low,mid-1);
        }
    }
    return -1;
}