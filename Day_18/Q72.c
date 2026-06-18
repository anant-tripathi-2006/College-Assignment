#include <stdio.h>

int main() {
    int arr[] = {12, 45, 5, 89, 23, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Decreasing Sort Logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Print Output
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}