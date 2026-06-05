#include <stdio.h>

int main() {
    int n, largestPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {  // factor mila

            int prime = 1;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }

            if (prime) {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}