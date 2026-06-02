#include<stdio.h>
int main (){
    int n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        sum=sum+n%10;
        n=n/10;
    }
    printf("Total  sum of digits will be: %d",sum);

}