#include <stdio.h>

int main() {
    int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Array already sorted hona chahiye
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 22;
    
    int low = 0, high = n - 1;
    int result = -1;
    
    // Binary Search Logic
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            break;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    // Print Output
    if (result != -1) {
        printf("Element found at index: %d", result);
    } else {
        printf("Element not found");
    }
    return 0;
}