#include <stdio.h>
int factr(int n);
int factn(int n);
void main()
{
  int n,fr,fn;
  printf("enter number: ");
  scanf("%d",&n);
  fr=factr(n);
  printf("%d factorial using recursive function=%d\n",n,fr);
  fn=factn(n);
  printf("%d factorial using non-recursive function=%d",n,fn);

}
int factr(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*factr(n-1);
    }
}
int factn(int n)
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