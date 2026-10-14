#include<stdio.h>
long long sumDigits(long long n) {
// TODO: calculate and return digit sum
    long long sum = 0;
    while(n>0){
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }
    return sum;
}
int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%lld", sumDigits(n));
    return 0;
}