#include <stdio.h>

void main() {
    int choice;
    float a, b;

    while(1) {
        printf("\n--- Menu Driven Calculator ---\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 5) break;

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch(choice) {
            case 1: printf("Result: %.2f\n", a + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4: 
                if(b == 0) printf("Error! Division by zero.\n");
                else printf("Result: %.2f\n", a / b); break;
            default: printf("Invalid choice!\n");
        }
    }
}