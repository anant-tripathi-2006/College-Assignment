#include<stdio.h>
int main (){
    int n,a=0,b=1,flag;
    printf("Enter which term u want: ");
    scanf("%d", &n);
    if(n<1){
        printf("Invalid");}
        return 0;
    if(n==1){
        printf("0");}
        return 0;
    if(n==2){printf("1");}
    for(int i=3;i<=n;i++){
        flag=a+b;
        a=b;
        b=flag;
    }
    printf("%d",flag);


    return 0;
}