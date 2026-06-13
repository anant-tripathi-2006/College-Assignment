#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c, i;

    if(n == 0)
        return a;

    for(i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int num;

    printf("Enter n: ");
    scanf("%d", &num);

    printf("Fibonacci = %d", fibonacci(num));

    return 0;
}