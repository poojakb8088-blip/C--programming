#include<stdio.h>
void result(char name[],int marks[],int n)
{
    int i,total=0;
    float percentage;
    for(i=0;i<n;i++)
    total+=marks[i];
    percentage=(float)total/n;
    printf("\nName:%s",name);
    printf("\nTotal:%d",total);
    printf("\nPercentage:%.2f",percentage);
    if(percentage>=90)
    printf("\nGrade:A");
    else if(percentage>=75)
    printf("\nGrade:B");
    else if(percentage>=60)
    printf("\nGrade:C");
    else if(percentage>=50)
    printf("\nGrade:D");
    else
    printf("\nGrade:F");
}
int main()
{
    int n,s,i,j;
    int marks[100][5];
    char name[100][50];
    float per[100];
    printf("Enter number  of students");
    scanf("%d",&n);
    printf("Enter number of subjects(3-5)");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        int total=0;
        printf("\nEnter name");
        scanf("%s",name[i]);
        printf("Enter marks:\n");
        for(j=0;j<s;j++)
        {
            scanf("%d",&marks[i][j]);
             total+=marks[i][j];
        }
        per[i]=(float)total/s;
        result(name[i],marks[i],s);
        printf("\n");
    }
    int high=0;
    for(i=1;i<n;i++)
    {
        if(per[i]>per[high])
        high=i;
    }
    printf("\nHighest Percentage:%s(%.2f%%)\n",name[high],per[high]);
    return 0;
}