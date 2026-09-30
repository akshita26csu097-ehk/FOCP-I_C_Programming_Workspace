#include<stdio.h>
int main(void){
    // int a;
    // printf("Enter your number : ");
    // scanf("%d", &a);
    // if(a>0){
    //     printf("The number entered is positive %d\n",);
    // }
    // else if (a<0){
    //     printf("The number entered is negative %d\n",);
    // }
    // else{
    //     printf("The number entered is 0");
    // }
    // return 0;

    //OR USE THIS WAY

    int x,y;
    char op;
    printf("Enter 1st number : ");
    scanf("%d", &x);
    printf("Enter 2nd number : ");
    scanf("%d", &y);
    printf("Enter operator [+,-,/,*,%%]");
    scanf(" %c", &op); //leave space before %c
    if(op=='+'){
    printf("Result = %d\n", x+y);
    }
    else if (op=='-'){
        printf("Result = %d\n", x-y);
    }
    else if(op=='*'){
        printf("Result = %d\n", x*y);
    }
    else if(op=='/' && y!=0){
        printf("Result = %d\n", x/y);
    }
    else if (op=='%' && y!=0){
        printf("Result = %d\n", x%y);
    }
    else{
        printf("ERROR !\n Inpur number/ Operator is invalid");
    }
    return 0;
}