#include<stdio.h>
#include<math.h>
int GPseries(int a, int r, int n) 
{ 
    int sum = 0;
    int term = a;
    for(int i = 1; i<= n; i++){
        sum = sum + term;
        term = term*r;
    }
    return sum;
}
int main(void){
    int a, r, n;
    printf("a = ");
    scanf("%d", &a);
    printf("r = ");
    scanf("%d", &r);
    printf("n = ");
    scanf("%d", &n);
    printf("%d", GPseries(a,r,n));
    return 0;
}