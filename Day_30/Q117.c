#include <stdio.h>
#include <string.h>

void main() {
    char names[30][50];
    int rollNo[30];
    float marks[30];
    int count = 0, choice;

    while(1) {
        printf("\n--- Student Record System ---\n1. Add Student\n2. Display Records\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 3) break;

        switch(choice) {
            case 1:
                printf("Enter Roll No: "); scanf("%d", &rollNo[count]);
                printf("Enter Student Name: "); scanf(" %[^\n]s", names[count]);
                printf("Enter Marks: "); scanf("%f", &marks[count]);
                count++; break;
            case 2:
                if(count == 0) { printf("No student records available.\n"); break; }
                for(int i=0; i<count; i++)
                    printf("Roll No: %d | Name: %s | Marks: %.2f\n", rollNo[i], names[i], marks[i]);
                break;
            default: printf("Invalid choice!\n");
        }
    }
}