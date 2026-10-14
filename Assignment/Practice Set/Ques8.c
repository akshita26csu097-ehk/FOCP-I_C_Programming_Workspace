#include<stdio.h>
int countDigits(long long n) {
// TODO: use a loop to count digits
    // int count = 0;
    // while(n>0){
    //     n = n / 10;
    //     count ++;
    // }
    // return count;
    int count = 0;
    for(;n>0; n = n / 10){
        count++;
    }
    return count;
}
int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%d", countDigits(n));
    return 0;
}