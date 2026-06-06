#include<stdio.h>
int main (){

    int x,n,ans=1;

    printf("Enter base (x): ");
    scanf("%d",&x);

    printf("Enter power (n): ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        ans = ans * x;
    }

    printf("Result = %d",ans);

    return 0;
}