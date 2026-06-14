#include <stdio.h>

int main() {
    int arr[100], n, i, j, visited[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if(count > 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}