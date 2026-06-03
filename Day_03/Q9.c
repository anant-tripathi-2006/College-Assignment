#include<stdio.h>
int main (){
    int n,prime=0;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n<=1){
        printf("The entered number is not prime.");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=1;
            break;    
        }

    }
        if(prime==1){
               printf("The number is not prime.");
        }
         else{
            printf("The number is prime.");
        }

    
    return 0;
}