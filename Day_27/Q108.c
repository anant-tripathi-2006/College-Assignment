// 4. Marksheet Management System

#include <stdio.h>

struct Marksheet
{
    int roll;
    char name[50];
    int m1,m2,m3,m4,m5,total;
    float percentage;
};

int main()
{
    struct Marksheet s[100];
    int n,i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll and Name: ");
        scanf("%d %s",&s[i].roll,s[i].name);

        printf("Enter Marks of 5 Subjects: ");
        scanf("%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);

        s[i].total = s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        s[i].percentage = s[i].total/5.0;
    }

    printf("\nMarksheet\n");
    for(i=0;i<n;i++)
    {
        printf("Roll:%d Name:%s Total:%d Percentage:%.2f%%\n",
               s[i].roll,s[i].name,s[i].total,s[i].percentage);
    }

    return 0;
}