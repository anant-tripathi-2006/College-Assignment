#include<stdio.h>

int main() {
    int n, i, prime=0;

    printf("Enter range: ");
    scanf("%d", &n);

    for(int a=2;a<n;a++){
        prime=0;

        for(i=2;i<a;i++){
            if(a%i==0){
                prime=1;
                break;
            }
        }
        if(prime==0){
            printf("%d ",a);
        }

    }
    return 0;
}