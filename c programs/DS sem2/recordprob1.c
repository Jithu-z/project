
#include<stdio.h>
void main(){
    int ch,i,A[20],lim,ele,flag=0,s=0,high,low,mid,c,j;
    do{
        flag=0;
        printf("Type 1. Linear search\n2. Binary Search\n3. Exit\n enter your choice:");
        scanf("%d",&ch);
        switch (ch){
            case 1:  
                printf("Enter the number of elements in the array : ");
                scanf("%d",&lim);
                printf("\nEnter the elements for the array");
                for(i=0;i<lim;i++){
                    scanf("%d",&A[i]);
                }
                printf("Enter the element to be searched : ");
                scanf("%d",&ele);
                        for(i=0;i<lim;i++){
                            if (A[i]==ele)
                            {
                                printf("element was found in position %d\n",i+1);
                                flag=1;
                            }
                            
                        }
                        if(flag==0){
                            printf("element was not found\n");
                        }
                        break;
            case 2:
            printf("Enter the number of elements in the array : ");
                scanf("%d",&lim);
                printf("\nEnter the elements for the array\n");
                for(i=0;i<lim;i++){
                    scanf("%d",&A[i]);
                }
                /*ARRAY SORTING*/
                for(j=0;j<lim-1;j++)
                {
                    for(i=0;i<lim;i++)
                    {
                        if(A[i]>A[i+1])
                        {
                            c=A[i];
                            A[i]=A[i+1];
                            A[i+1]=c;

                        }
                    }
                }
                 printf("\nSORTED ARRAY:-\n[");
                    for(i=0;i<lim;i++)
                    {
                        printf("%d ",A[i]);
                        if(i==lim-1)
                        {
                            printf("]");
                        }
                    }
                    
                printf("Enter the element to be searched : ");
                scanf("%d",&ele);
                high=lim-1;
                low=0;
                while(high!=low && low!=mid){
                    mid=(low+high)/2;
                    if(A[mid]==ele){
                        printf("element found in position %d\n",mid+1);
                        flag=1;
                        break;
                    }
                    else if(A[mid]<ele){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
                if(flag==0){
                    printf("element was not found\n");
                }
                break;
            case 3:
                printf("Code terminated");
                break;
            default:
                printf("Error selection Try again \n");
                break;
        }
    }while(ch!=3);
}