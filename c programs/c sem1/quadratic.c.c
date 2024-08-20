#include<stdio.h>
#include<math.h>
void main()
{
    int n=50,a,s,b,c,res,dis,res1,res2,d;
    printf("enter coef of x2,x and constant :");
    scanf("%d%d%d",&a,&b,&c);
        printf("\nthe quadratic equation is: %dxsq+%dx+%d=0",a,b,c);
    d=pow(b,2)-4*a*c;
    if(d==0)
    {
        printf("equation has only one root:");
        res=b/(2*a);
        printf("%d",res);
    }
    else if(d>0)
    {
        printf("equation has 2 reall roots:\n");
        dis=pow(d,0.5);
        res1=(b+dis)/(2*a);
        res2=(dis-b)/(2*a);
        printf("-%d\n%d",res1,res2);
    }
    else if(d<0)
    {
        printf("\nNO REAL ROOT EXISTS YOU MF!!\nbut imaginary roots are:");
        d=-1*d;
        printf("-%d+%di/%d\t-%d-%di/%d",b,d,2*a,b,d,2*a);
    }
}