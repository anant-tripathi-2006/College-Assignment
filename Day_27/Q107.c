// 3. Salary Management System

#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Salary s[100];
    int n,i;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee ID, Name, Basic Salary: ");
        scanf("%d %s %f",&s[i].empId,s[i].name,&s[i].basic);

        s[i].hra = 0.20 * s[i].basic;
        s[i].da = 0.10 * s[i].basic;
        s[i].gross = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\nSalary Details\n");
    for(i=0;i<n;i++)
    {
        printf("ID:%d Name:%s Basic:%.2f HRA:%.2f DA:%.2f Gross:%.2f\n",
               s[i].empId,s[i].name,s[i].basic,s[i].hra,s[i].da,s[i].gross);
    }

    return 0;
}