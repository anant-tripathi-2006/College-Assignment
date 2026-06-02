#include<stdio.h>
int main (){
    int n,mup=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        mup=mup*(n%10);
        n=n/10;
    }
    printf("Total products of digits will be: %d",mup);

}