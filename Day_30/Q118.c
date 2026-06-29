#include <stdio.h>

void main() {
    int bookIds[10] = {101, 102, 103};
    int status[10] = {0, 0, 0}; // 0 = In Library, 1 = Issued
    int choice, id;

    while(1) {
        printf("\n--- Mini Library System ---\n1. List Book Status\n2. Issue Book\n3. Return Book\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 4) break;

        switch(choice) {
            case 1:
                for(int i=0; i<3; i++) printf("Book ID: %d Status: %s\n", bookIds[i], status[i] == 1 ? "Issued" : "Available");
                break;
            case 2:
                printf("Enter Book ID to issue (101-103): "); scanf("%d", &id);
                for(int i=0; i<3; i++) {
                    if(bookIds[i] == id) {
                        if(status[i] == 1) printf("Already issued!\n");
                        else { status[i] = 1; printf("Book issued!\n"); }
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to return (101-103): "); scanf("%d", &id);
                for(int i=0; i<3; i++) {
                    if(bookIds[i] == id) {
                        if(status[i] == 0) printf("Book was not issued!\n");
                        else { status[i] = 0; printf("Book returned!\n"); }
                    }
                }
                break;
            default: printf("Invalid choice!\n");
        }
    }
}