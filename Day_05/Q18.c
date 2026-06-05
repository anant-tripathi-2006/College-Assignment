#include<stdio.h>
int main (){
    int n,temp,rev,flag,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    for(;temp>0;temp=temp/10){
        rev=temp%10;

        flag=1;

        for(int a=1;a<=rev;a++){
            flag=flag*a;
        }

        sum=sum+flag;
    }

    if(sum==n){
        printf("The entered number is a strong number.");
    }
    else{
        printf("The entered number is not a strong number.");
    }

    return 0;
}