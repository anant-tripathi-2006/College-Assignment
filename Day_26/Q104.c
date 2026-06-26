#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("Q2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 14\n4. 15\n");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    printf("Q3. C language was developed by?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &ans);
    if (ans == 2)
        score++;

    printf("Your Score = %d/3\n", score);

    return 0;
}