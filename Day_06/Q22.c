#include<stdio.h>
#include<math.h>
int main (){
    int n,i,last,final=0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i=0;n>0;i++){
        last=n%10;
        final=final+last*pow(2,i);
        n=n/10;
    }
    printf("The number in decimal will be: %d",final);


    return 0;
}