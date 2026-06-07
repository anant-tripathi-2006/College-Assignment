#include <stdio.h>
void reverseNumber(int n)
{
    if (n==0)
        return;

    printf("%d",n%10);
    reverseNumber(n/10);
}
int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);

    reverseNumber(n);
    return 0;
}