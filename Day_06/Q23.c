#include<stdio.h>
int main (){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int bin[50],i,count=0;
    for(i=0;n>0;i++){
        bin[i]=n%2;
        n=n/2;

    }
    for(int j=i-1;j>=0;j--){
        printf("%d",bin[j]);
        if(bin[j]==1){
            count=count+1;
        }

    }
    printf("\nThe total number of bits will be:%d",count);



    return 0;
}