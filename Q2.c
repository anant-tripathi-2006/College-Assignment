#include<stdio.h>
int main(){
    int n;
    printf("Enter a number whose table u want: ");
    scanf("%d",&n);
    for(int i=1;i<11;i++){
        printf("%d\n",n*i);
    }
    return 0;
}