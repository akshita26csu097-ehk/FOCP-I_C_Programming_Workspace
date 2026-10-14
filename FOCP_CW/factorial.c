#include<stdio.h>
int main(void){
    long long int fact=1;
    int n;
    printf("Enter number");
    scanf("%d", &n);
    if(n==1 || n==0){
        fact=1;
    }
    while(n>=2){
        fact*=n;
        n--;
    }
    printf("%lld",fact);
    return 0;
}