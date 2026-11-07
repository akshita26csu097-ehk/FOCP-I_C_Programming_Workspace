#include<stdio.h>
int digitCount(int num) 
{ 
    int count = 0;
    for(; num>0; ){
        int num = num/10;
        count++;
    }
    return count;
}
int main(void){
    int num;
    scanf("%d", &num);

    printf("%d", digitCount(num));

    return 0;
}