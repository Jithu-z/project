#include<stdio.h>
void sorter(int a[],int n,int ele)
{
    int i,c;
    c=n/2;
    for(i=n-1;i>=n/2;i--)
    {
        a[i+1]=a[i];
    }
    a[c]=ele;
    printf("new array:-\n");
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
   int a[10],i,n,ele;
	printf("enter the limit: ");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("enter element to be inserted in the middle: ");
    scanf("%d",&ele);
    sorter(a,n,ele);
}