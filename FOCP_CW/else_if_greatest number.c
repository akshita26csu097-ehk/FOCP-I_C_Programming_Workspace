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
    else if (a<b){
        printf("The greatest number is %d\n",b);
    }
    else{
        printf("both nos are equal\n");
    }
    return 0;
}