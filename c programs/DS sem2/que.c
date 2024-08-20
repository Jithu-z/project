#include<stdio.h>
void main()
{
    int q[20],n,front=-1,rear=-1,temp,ch,i;
    printf("enter queue elements: ");
    scanf("%d",&n);
    do{
        printf("Menu\n1.Enqueue\n2.dequeue\n3.display queue\n4.exit\nenter choice: ");
        scanf("%d",&ch);
        if(ch==4)
        {
            printf("END OF PROGRAM");
        }
        else
        {
            switch(ch)
            {
                case 1:
                {
                    if(rear==n-1)
                    {
                        printf("Queue overflow");
                    }
                    else if(front==-1 && rear==-1)
                    {
                        front++;
                        rear++;
                        printf("enter element to add: ");
                        scanf("%d",&temp);
                        q[rear]=temp;
                    }
                    else
                    {
                        rear++;
                        printf("enter element to add: ");
                        scanf("%d",&temp);
                        q[rear]=temp;
                    }
                    break;
                }
                case 2:
                {
                    if(front==-1 && rear==-1)
                    {
                        printf("Queue underflow");
                    }
                    else if(front==rear)
                    {
                        temp=q[front];
                        printf("element dequeued=",temp);
                        front=-1;
                        rear=-1;
                    }
                    else{
                        temp=q[front];
                        printf("element dequeued=",temp);
                        front++;
                    }
                }
                case 3:
                {
                    if(front==-1 && rear==-1)
                    {
                        printf("empty queue\n");
                    }
                    printf("\n[");
                    for(i=front;i<=rear;i++)
                    {
                        printf("%d\t",q[i]);
                    }
                    printf("]\n");
                }
            }
        }

    }while(ch<4);
}