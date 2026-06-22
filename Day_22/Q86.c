#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 1;

    printf("Enter a sentence: ");
    gets(str);

    if(str[0] == '\0')
        count = 0;
    else {
        for(i = 0; str[i] != '\0'; i++) {
            if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
                count++;
        }
    }

    printf("Total words = %d", count);

    return 0;
}