#include<stdio.h>
int main (){

    int n,rem,bin[20],i;
    printf("Enter number: ");
    scanf("%d", &n);

    for( i=0;n>0;i++){
        bin[i]=n%2;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d", bin[j]);

    }

    return 0;

}