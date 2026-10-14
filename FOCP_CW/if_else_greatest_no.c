#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    if(a>b){
        printf("The greatest number is %d\n",a);
    }
    else{
        printf("The greatest number is %d\n",b);
    }
    return 0;
}