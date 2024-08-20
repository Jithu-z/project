#include<stdio.h>
#include<math.h>
void main()
{
    int ch;
    char choice;
    do
    {
        int n,c=0,co=0,x,s=0,i,y,l=0;
        printf("\nenter a natural number: ");
        scanf("%d",&n);
        x=n;
        y=n;
        printf("\n1.check the number is prime or not\n2.check if the number is armstrong\n");
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
            s=0;
            while(n>0)
            {
                co++;
                n/=10;
            }
            while(x>0)
            {
                l=x%10;

                s=s+pow(l,co);
                x/=10;
            }
            if(s==y)
            {
                printf("%d is armstrong ",y);
            }
            else
            {
                printf("%d is not armstrong",y);
            }
            break;
            }
            default:
            {
                printf("invalid choice entered");
            }

        }
        printf("\ncontinue?(y/n)");
        scanf(" %c",&choice);                           //note the space in scanf
    } while (choice=='y');
    
}




   
   



    