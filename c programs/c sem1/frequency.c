#include<stdio.h>
int check(int n,int *p,int l);
{void main()

    int a[30],n,b[30],c[30],i,j,k=0,l=0,co=0,*p,m=0;
    printf("enter array limit: ");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("\nthe array is:-\n{");
    for(i=0;i<n;i++)
    {
      printf("%d,",a[i]);
    }
    printf("}\n");
    p=&b[0];
    for(i=0;i<n;i++)
    {
        if(check(a[i],p,l)==1)
        {
            b[k]=a[i];
            k++;
            l++;
        }
        else if(check(a[i],p,l)==0)
        {
            continue;
        }
    }
    for(i=0;i<l;i++)
    {
      for(j=0;j<n;j++)
      {
        if(b[i]==a[j])
        {
          co++;
        }
      }
      c[m]=co;
      co=0;
      m++;
    }
    printf("\nnumber\t\tfrequency:-\n");
    for(i=0;i<l;i++)
    {
        printf("%d\t\t%d\n",b[i],c[i]);
    }
}
int check(int n,int *p,int l)
{
    int i,flag=1;
    for(i=0;i<l;i++)
    {
        if(*(p+i)==n)
        {
            flag=0;
        }
    }
    return flag;
}