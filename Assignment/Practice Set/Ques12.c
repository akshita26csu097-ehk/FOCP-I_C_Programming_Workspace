#include<stdio.h>
long long sumFirstN(long long n) {
// TODO: calculate 1 + 2 + ... + n
long long sum = 0;
    for(long long i = 1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%lld", sumFirstN(n));
    return 0;
}