#include<stdio.h>
int main(){
    for(int i = 1; i<=10; i++){    // for(initialisation; condition; update)
        printf("%d\n", i);
    }
    //printf("i after loop %d\n", i);  ---> //it gives error because i is only initialised for "for loop"
    return 0;
}