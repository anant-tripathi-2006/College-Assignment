#include <stdio.h>
#include <string.h>

// Global Variables
char productNames[50][50];
float productPrices[50];
int totalProducts = 0;

// Function Declarations
void addNewProduct();
void displayAllProducts();
void matchProductByName();

void main() {
    int choice;
    while(1) {
        printf("\n===== Retail Core Mini Engine =====\n");
        printf("1. Register Product\n2. View Catalog\n3. Lookup Item Profile\n4. Terminate Engine\n");
        printf("Enter execution command code: ");
        scanf("%d", &choice);
        
        if(choice == 4) {
            printf("Safely exiting engine environment.\n");
            break;
        }

        switch(choice) {
            case 1: addNewProduct(); break;
            case 2: displayAllProducts(); break;
            case 3: matchProductByName(); break;
            default: printf("Error: Command mismatch.\n");
        }
    }
}

// Function Implementations
void addNewProduct() {
    printf("Assign Product Name: ");
    scanf(" %[^\n]s", productNames[totalProducts]);
    printf("Assign Valuation Unit Price ($): ");
    scanf("%f", &productPrices[totalProducts]);
    totalProducts++;
    printf("Product registered successfully.\n");
}

void displayAllProducts() {
    if(totalProducts == 0) {
        printf("Catalog is presently completely empty.\n");
        return;
    }
    printf("\n--- System Itemized Ledger ---\n");
    for(int i = 0; i < totalProducts; i++) {
        printf("Item Line Reference #%d | Profile Title: %s | Rate Assignment: $%.2f\n", i + 1, productNames[i], productPrices[i]);
    }
}

void matchProductByName() {
    char targetStr[50];
    int itemMatchFlag = 0;
    
    printf("Enter explicit alphanumeric string key matching target label: ");
    scanf(" %[^\n]s", targetStr);
    
    for(int i = 0; i < totalProducts; i++) {
        if(strcmp(productNames[i], targetStr) == 0) {
            printf("\nMatch located inside target stack matrix row:\n");
            printf("System Tracking Number: %d | Verified Title: %s | Evaluation: $%.2f\n", i + 1, productNames[i], productPrices[i]);
            itemMatchFlag = 1;
            break;
        }
    }
    if(!itemMatchFlag) {
        printf("Search execution complete: Key query parameters structural failure (Item not discovered).\n");
    }
}