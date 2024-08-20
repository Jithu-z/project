#include<stdio.h>
void main()
{
    FILE *fp;
    int n,i,age;
    char name[30];
    fp=fopen("FILE1.txt","w+");
    printf("enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int age;
        printf("enter name and age:\n");
        scanf("%s%d",name,&age);
        fprintf(fp,"%s%d",name,age);
    }
    rewind(fp);
    for(i=0;i<n;i++)
    {
        printf("\n");
        fscanf(fp,"%s%d",name,&age);
        printf("name=%s\nage=%d",name,age);
    }
    fclose(fp);

}