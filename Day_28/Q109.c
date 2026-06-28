#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

void main() {
    struct Book library[100];
    int count = 0, choice, searchId, found;

    while(1) {
        printf("\n--- Library Management System ---\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 4) break;

        switch(choice) {
            case 1:
                printf("Enter Book ID: "); scanf("%d", &library[count].id);
                printf("Enter Title: "); scanf(" %[^\n]s", library[count].title);
                printf("Enter Author: "); scanf(" %[^\n]s", library[count].author);
                count++;
                printf("Book added successfully!\n");
                break;
            case 2:
                if(count == 0) { printf("Library is empty.\n"); break; }
                for(int i=0; i<count; i++)
                    printf("ID: %d | Title: %s | Author: %s\n", library[i].id, library[i].title, library[i].author);
                break;
            case 3:
                printf("Enter Book ID to search: "); scanf("%d", &searchId);
                found = 0;
                for(int i=0; i<count; i++) {
                    if(library[i].id == searchId) {
                        printf("Found! Title: %s | Author: %s\n", library[i].title, library[i].author);
                        found = 1; break;
                    }
                }
                if(!found) printf("Book not found.\n");
                break;
            default: printf("Invalid choice!\n");
        }
    }
}