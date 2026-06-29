#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int choice;

    while(1) {
        printf("\n--- String Operations ---\n1. Length of String\n2. Copy String\n3. Concatenate Strings\n4. Compare Strings\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 5) break;

        printf("Enter String 1: "); scanf(" %[^\n]s", str1);

        switch(choice) {
            case 1: printf("Length: %lu\n", strlen(str1)); break;
            case 2: strcpy(str2, str1); printf("Copied String 2: %s\n", str2); break;
            case 3: 
                printf("Enter String 2 to append: "); scanf(" %[^\n]s", str2);
                strcat(str1, str2); printf("Merged: %s\n", str1); break;
            case 4:
                printf("Enter String 2 to compare: "); scanf(" %[^\n]s", str2);
                if(strcmp(str1, str2) == 0) printf("Strings are identical.\n");
                else printf("Strings are different.\n"); break;
            default: printf("Invalid choice!\n");
        }
    }
}