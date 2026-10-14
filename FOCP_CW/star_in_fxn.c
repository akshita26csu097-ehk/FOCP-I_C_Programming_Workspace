#include<stdio.h>
void printpattern(int n){
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        
        printf("\n");
    }
}
int main(){
    printpattern(10);
    return 0;
}