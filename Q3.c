#include<stdio.h>
int main(){
    int n,flag=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        flag=flag*i;

    }
    printf("factorial of a number will be: %d",flag);
}