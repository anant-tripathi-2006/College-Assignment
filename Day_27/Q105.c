// 1. Student Record Management System

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll, Name, Marks: ");
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }

    printf("\nStudent Records\n");
    for(i=0;i<n;i++)
    {
        printf("Roll: %d\tName: %s\tMarks: %.2f\n",s[i].roll,s[i].name,s[i].marks);
    }

    return 0;
}