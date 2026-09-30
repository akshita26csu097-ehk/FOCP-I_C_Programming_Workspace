#include<stdio.h>
int main(void){
    int dayno;
    char holiday = 'n';
    printf("Enter week day : ");
    scanf("%d", &dayno);
    printf("Is holiday(y|n) : ");
    scanf(" %c", &holiday);

    if ((dayno ==2 || dayno==3) && ! (holiday == 'y' || holiday == 'y')){
        printf("FOCP class scheduled\n");
    }
    else{
        printf("No FOCP class is schcheduled\n");
    }
    return 0;

    // int dayno;
    // int holiday = 'n';
    // printf("Enter week day : ");
    // scanf("%d", &dayno);
    // printf("Is holiday(y=1|n=0) : ");
    // scanf("%d", &holiday);

    // if ((dayno ==2 || dayno==3) && !holiday){
    //     printf("FOCP class scheduled\n");
    // }
    // else{
    //     printf("No FOCP class is schcheduled\n");
    // }
    
}