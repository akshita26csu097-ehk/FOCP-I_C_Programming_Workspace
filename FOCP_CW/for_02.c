#include<stdio.h>
int main(){
     //therefore declare it outside...check for.c for reference
    int i=0;
    for(;i<=10;){
        printf("%d\n", i);
        i++;
    } 
    printf("i after loop  %d\n", i);
    //but while loop is better for this 
    return 0;
}