#include<stdio.h>
int main (){
    int n,rev;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=0;n>0;i++){

        rev=n%10;
        printf("%d",rev);
        n=n/10;

    }
}