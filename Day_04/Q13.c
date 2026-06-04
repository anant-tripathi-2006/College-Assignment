#include<stdio.h>
int main (){
    int n,a=0,b=1,nxt;
    printf("Enter upto u want fibonacchi: ");
    scanf("%d", &n);
    if(n<=1){
        printf("Enter number greater then zero.");
    }
    if(n>=1){
        printf("0 ");
    }
    if(n>=2){
        printf("1 ");
    }
    for(int i=3;i<=n;i++){
        nxt=a+b;
        printf("%d ",nxt);
        a=b;
        b=nxt;

    }
    return 0;
}