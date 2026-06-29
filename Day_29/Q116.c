#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
    float price;
};

void main() {
    struct Item inv[50];
    int count = 0, choice;

    while(1) {
        printf("\n--- Inventory Management ---\n1. Add Item\n2. Display Inventory\n3. Calculate Total Stock Value\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 4) break;

        switch(choice) {
            case 1:
                printf("Item ID: "); scanf("%d", &inv[count].id);
                printf("Item Name: "); scanf(" %[^\n]s", inv[count].name);
                printf("Quantity: "); scanf("%d", &inv[count].qty);
                printf("Price per Unit: "); scanf("%f", &inv[count].price);
                count++; break;
            case 2:
                for(int i=0; i<count; i++)
                    printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n", inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
                break;
            case 3: {
                float totalValue = 0;
                for(int i=0; i<count; i++) totalValue += (inv[i].qty * inv[i].price);
                printf("Total Inventory Asset Value: %.2f\n", totalValue); break;
            }
            default: printf("Invalid choice!\n");
        }
    }
}