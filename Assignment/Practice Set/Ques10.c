#include<stdio.h>
long long reverseNumber(long long n) {
// TODO: reverse digits and return result
    // int sum = 0;
//     while(n>0){
//         int digit = n % 10;
//         sum = 10*sum + digit;
//         n = n / 10;
//     }
//     return sum;
    int sum = 0;
    for(;n>0; n = n/10){
        int digit = n%10;
        sum = sum*10 + digit;
    }
    return sum;
}

int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%d", reverseNumber(n));
    return 0;
}