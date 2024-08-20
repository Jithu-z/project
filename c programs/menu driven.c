#include<stdio.h>
#include<math.h>
void main()
{
    int ch;
    char choice;
    do
    {
        int n,c=0,dig=0,n2,check=0,i,n3,ldig=0;
        printf("\nenter a natural number: ");
        scanf("%d",&n);
        n2=n;
        n3=n;
        printf("\n1.to check if the number is prime or not\n2.to check if a number is armstrong or not\n");
        printf("enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
            if(n==1)
            {
                printf("1 is neither prime nor composite");
                break;
            }
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("%d is prime",n);
            }
            else
            {
                printf("%d is composite",n);
            }
            break;
            }
            case 2:
            {
            check=0;
            while(n>0)
            {
                dig++;
                n/=10;
            }
            while(n2>0)
            {
                ldig=n2%10;

                check=check+pow(ldig,dig);
                n2/=10;
            }
            if(check==n3)
            {
                printf("%d is an armstrong number",n3);
            }
            else
            {
                printf("%d is not an armstrong number",n3);
            }
            break;
            }
            default:
            {
                printf("invalid choice entered");
            }

        }
    } while (ch==1 || ch==2 || ch==3);
    
}




   
   



    