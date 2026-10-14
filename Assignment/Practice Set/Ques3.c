#include<stdio.h>
long long calculateElectricityBill(long long units) {
// TODO: calculate and return the bill
    if(units<=100)
    return units*2;
    else if(units<=200)
    return 100*2 + (units - 100)*3;
    else if(units<=300)
    return 100*2 + 100*3 + (units - 200)*5;
    else if(units>300)
    return 100*2 + 100*3 + 100*5 + (units - 300)*7;
}
int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%lld", calculateElectricityBill(n));
    return 0;
}