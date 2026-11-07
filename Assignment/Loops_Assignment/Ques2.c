#include<stdio.h>
int factorial(int x) 
{
    int fact = 1;
    for(int i; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}
int main(void){
    int x;
    scanf("%d", &x);
    printf("%d", factorial(x));
    return 0;
}