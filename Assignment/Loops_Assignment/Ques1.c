#include<stdio.h>
int SumSquareSeries(int n){
    int sum = 0;
    for(int i; i<=n; i++){
        int mult = i*i;
        sum = sum + mult;
    }    
        return sum;
}
int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", SumSquareSeries(n));
    return 0;
}