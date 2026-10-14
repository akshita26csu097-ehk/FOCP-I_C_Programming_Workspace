#include<stdio.h>
int isEven(long long n){
    if(n%2==0)
    printf("Even");
    else
    printf("Odd");
}
int main(void){
    long long n;
    scanf("%lld", &n);
    isEven(n);
    return 0;
}