#include <stdio.h>
#include <string.h>

struct Contact {
    char name[40];
    char phone[15];
};

void main() {
    struct Contact directory[50];
    int count = 0, choice;
    char searchName[40];

    while(1) {
        printf("\n--- Contact Management System ---\n1. Add Contact\n2. View All Contacts\n3. Search Contact\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 4) break;

        switch(choice) {
            case 1:
                printf("Enter Name: "); scanf(" %[^\n]s", directory[count].name);
                printf("Enter Phone: "); scanf("%s", directory[count].phone);
                count++; printf("Contact added!\n"); break;
            case 2:
                if(count == 0) { printf("No contacts found.\n"); break; }
                for(int i=0; i<count; i++) printf("Name: %s | Phone: %s\n", directory[i].name, directory[i].phone);
                break;
            case 3:
                printf("Enter Name to search: "); scanf(" %[^\n]s", searchName);
                int found = 0;
                for(int i=0; i<count; i++) {
                    if(strcmp(directory[i].name, searchName) == 0) {
                        printf("Found! Phone: %s\n", directory[i].phone); found = 1; break;
                    }
                }
                if(!found) printf("Contact not found.\n"); break;
            default: printf("Invalid choice!\n");
        }
    }
}