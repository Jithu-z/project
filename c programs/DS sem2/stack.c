#include<stdio.h>
void main()
{
    int st[20],n=-1,ch,i,ele,c=0;
    do{
        printf("MENU:-\n1.PUSH\n2.POP\n3.PRINT STACK\nENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
             if(n>20)
             {
                printf("OVERFLOW");
                break;
             }
             printf(l"enter element to push: ");
             scanf("%d",&ele);
             n++;
             st[n]=ele;
             if(c>0)
             {
                c--;
             }
             break;
            }
            case 2:
            {
                if(n==-1)
                {
                    printf("UNDERFLOW");
                }
                else
                {
                    ele=st[n];
                    st[n+1]=ele;
                    n--;
                    c++;
                    printf("\n \t---------->%d\n \t|\n \t|\n \t|\n",ele);
                     while(c>0)
                    {
                        printf("|\t \t|");
                        c--;
                    }
                    printf("\n|\t%d\t|------->TOP ELEMENT\n",st[n]);
                    for(i=n-1;i>=0;i--)
                    {
                        printf("|\t%d\t|\n",st[i]);
                    }
                    printf("|_______________|\n");
                }
                break;
            }
            case 3:
            {
                if(n==-1)
                {
                    printf("EMPTY STACK PUSH FIRST\n");
                }
                else
                {
                    printf("\n|\t%d\t|------->TOP ELEMENT\n",st[n]);
                    for(i=n-1;i>=0;i--)
                    {
                        printf("|\t%d\t|\n",st[i]);
                    }
                    printf("|_______________|\n");
                }
                break;
            }
            default:
            {
                printf("invalid choice try again\n");
                break;
            }
        }

    }while(ch<=3);
}