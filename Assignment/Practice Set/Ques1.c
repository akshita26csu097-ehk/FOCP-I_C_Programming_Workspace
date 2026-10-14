#include <stdio.h>
void classifyNumber(long long n){
    if(n>0)
    printf("Positive");
    else if(n<0)
    printf("Negative");
    else
    printf("Zero");
}
int main(void){
    long long n;
    scanf("%lld", &n);
    classifyNumber(n);
    return 0;
}
