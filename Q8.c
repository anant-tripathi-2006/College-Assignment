#include<stdio.h>
int main (){
    int n,rev=0,store;

    printf("Enter number: ");
    scanf("%d",&n);
    store=n;
    for(int i=0;n>0;i++){

        rev=rev*10+n%10;
        n=n/10;

    }
    if(rev==store){
        printf("The number will be pallindrome.");
    }
      else{
        printf("The given number will not pallindrome.");

        
    }
}