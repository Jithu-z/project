#include<stdio.h>
void main()
{
	int a[10],i,ele,n,j,k;
	printf("enter the limit: ");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be removed: ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			i--;
			n--;
		}
	}
	printf("new array:-");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
}
