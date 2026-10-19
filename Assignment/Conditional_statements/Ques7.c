#include<stdio.h>
int main(void){
    int input1;
    int input2;
    scanf("%d %d", &input1 , &input2);
    if(input1<1 || input1>3 || input2<1 || input2>3){
        printf("Invalid");
    }
    else {
    switch(input1*10 + input2){
        case 11 :
        case 22 :
        case 33 : 
            printf("Draw");
            break;

        case 13 :
        case 32 :
        case 21 :
            printf("Player 1 wins");
            break;

        case 31 :
        case 23 : 
        case 12 : 
            printf("Player 2 wins");
            break;
  
        }
    }
    return 0;
}
