#include<stdio.h>
int main(void){
    // int a;
    // printf("Enter number : ");
    // scanf("%d", &a);
    // if(a%5==0){
    //     printf("%d is divisible by 5\n",a);
    // }
    // else{
    //     printf("%d is not divisible by 5\n",a);
    // }
    // return 0;

    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    if(a>b){
        printf("The greatest number is %d\n",a);
    }
    else if (a<b){
        printf("The greatest number is %d\n",b);
    }
    else{
        printf("both nos are equal\n");
    }
    return 0;
}    