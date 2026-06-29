#include <stdio.h>

void main() {
    int arr[100], n = 0, choice, pos, val;

    while(1) {
        printf("\n--- Array Operations ---\n1. Create/Reset\n2. Display\n3. Insert Element\n4. Delete Element\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 5) break;

        switch(choice) {
            case 1:
                printf("Enter total elements size: "); scanf("%d", &n);
                printf("Enter elements: ");
                for(int i=0; i<n; i++) scanf("%d", &arr[i]);
                break;
            case 2:
                if(n == 0) { printf("Array empty.\n"); break; }
                printf("Elements: ");
                for(int i=0; i<n; i++) printf("%d ", arr[i]);
                printf("\n"); break;
            case 3:
                printf("Enter index position (0 to %d): ", n); scanf("%d", &pos);
                printf("Enter value: "); scanf("%d", &val);
                for(int i=n; i>pos; i--) arr[i] = arr[i-1];
                arr[pos] = val; n++;
                break;
            case 4:
                printf("Enter index position to delete (0 to %d): ", n-1); scanf("%d", &pos);
                for(int i=pos; i<n-1; i++) arr[i] = arr[i+1];
                n--; break;
            default: printf("Invalid choice!\n");
        }
    }
}