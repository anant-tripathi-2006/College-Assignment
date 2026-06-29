#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

void main() {
    struct Employee staff[20];
    int count = 0, choice;

    while(1) {
        printf("\n--- Mini Employee System ---\n1. Add Employee\n2. List Employees\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 3) break;

        switch(choice) {
            case 1:
                printf("ID: "); scanf("%d", &staff[count].id);
                printf("Name: "); scanf(" %[^\n]s", staff[count].name);
                printf("Salary: "); scanf("%f", &staff[count].salary);
                count++; break;
            case 2:
                if(count == 0) printf("No data found.\n");
                for(int i=0; i<count; i++)
                    printf("ID: %d | Name: %s | Salary: %.2f\n", staff[i].id, staff[i].name, staff[i].salary);
                break;
            default: printf("Invalid choice!\n");
        }
    }
}