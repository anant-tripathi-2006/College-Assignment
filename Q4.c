#include<Stdio.h>
 int main (){
    int n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;n>0;i++){
        n=n/10;
        count++;
    }
    printf("Total digits will be: %d",count);
 }