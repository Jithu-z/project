#include <stdio.h>
int fact(int n);
void main()
{
  int n,f;
  printf("enter number: ");
  scanf("%d",&n);
  f=fact(n);
  printf("%d factorial=%d",n,f);
}
int fact(int n)
{
    int i,f=1;
    if (n==0)
    {
      return 1;
    }
    
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
