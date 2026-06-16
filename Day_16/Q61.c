#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    int sum = 0, expected;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    expected = n * (n + 1) / 2;

    printf("Missing Number = %d", expected - sum);

    return 0;
}