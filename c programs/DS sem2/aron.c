#include<stdio.h>
int Enqueue(int data,int qu[],int front,int rear,int n);
int Dequeue(int qu[],int front,int rear);
void Display(int qu[], int front,int rear);
void main()
{
    int qu[20],rear=-1,front=-1,n,data,choice;
    printf("Enter no of maximum elements in queue\n");
    scanf("%d",&n);
    do
    {
        printf("MENU........\n");
        printf(" 1.Enqueue\n 2.Dequeue\n 3.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        if(choice==3)
        {
            printf("Exiting the Program...");
        }
        else
        {
            switch(choice)
            {
                case 1:
                {
                    printf("Enter element to be entered\n");
                    scanf("%d",&data);
                    rear = Enqueue(data,qu,front,rear,n);
                    if(front==-1 && rear!=-1)
                    {
                        front=0;
                    }
                    printf("Queue is\n");
                    Display(qu,front,rear);
                    break;
                }
                case 2:
                {
                    front = Dequeue(qu,front,rear);
                    if(front==-1)
                    {
                        rear=-1;
                    }
                    printf("Queue is\n");
                    Display(qu,front,rear);
                    break;
                }
                default:
                {
                    printf("Invalid Choice\n");
                    break;
                }
            }
        }
    }while(choice!=3);
}
int Enqueue(int data,int qu[20],int front,int rear,int n)
{
    if(rear == n-1)
    {
        printf("Queue is Full\n");
        return rear;
    }
    else if(rear==-1 && front == -1)
    {
    printf("Queue is Empty\n"); // for entering first element
    rear++;
    qu[rear]=data;
    return rear;
    }
    else
    {
        rear++;
        qu[rear]=data;
        return rear;
    }
}
int Dequeue(int qu[20],int front,int rear)
{
    if(front==-1)
    {
        printf("Queue is Empty\n");
    }
  else if(front==rear)
  {
    int temp;
    temp = qu[front];
    front = -1;
    return front;
  }
  else
  {
    int temp;
    temp = qu[front];
    front++;
    return front;
  }
}

void Display(int qu[20],int front,int rear)
{
int i;
for(i=front;i<=rear;i++)
{
    printf("%d\t",qu[i]);
}
printf("\n");
}