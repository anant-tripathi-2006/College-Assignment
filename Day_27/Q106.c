// 2. Employee Management System

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n,i;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter ID, Name, Salary: ");
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }

    printf("\nEmployee Records\n");
    for(i=0;i<n;i++)
    {
        printf("ID: %d\tName: %s\tSalary: %.2f\n",e[i].id,e[i].name,e[i].salary);
    }

    return 0;
}