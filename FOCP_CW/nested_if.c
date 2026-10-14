#include<stdio.h>
int main(void){
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("%d\n",a);
        }
        else{
            if(b>c){
                printf("%d\n,b");
            }
            else{
                printf("%d\n",c);
            }
            
        }
    }
    
    return 0;
}