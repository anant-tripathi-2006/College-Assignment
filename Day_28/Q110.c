#include <stdio.h>

void main() {
    int accNum = 101, choice;
    float balance = 5000.0, amount;

    while(1) {
        printf("\n--- Bank Account System ---\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 4) break;

        switch(choice) {
            case 1: printf("Account No: %d | Balance: %.2f\n", accNum, balance); break;
            case 2: 
                printf("Enter deposit amount: "); scanf("%f", &amount);
                balance += amount;
                printf("Deposited successfully. New Balance: %.2f\n", balance);
                break;
            case 3:
                printf("Enter withdrawal amount: "); scanf("%f", &amount);
                if(amount > balance) printf("Insufficient balance!\n");
                else { balance -= amount; printf("Withdrawn successfully. New Balance: %.2f\n", balance); }
                break;
            default: printf("Invalid choice!\n");
        }
    }
}