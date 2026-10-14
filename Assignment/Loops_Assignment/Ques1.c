#include<stdio.h>
int SumSquareSeries(int n) {
    int sum = 0;
    for(int i = 0; i<=n; i++){
        int sq = i*i;
        sum = sum + sq;
    }
} 
int main(){
    int n;
    scanf("%d", &n);
    SumSquareSeries(n);
}