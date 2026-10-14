#include<stdio.h>
void printMultiplicationTable(int n) {
// TODO: use for loop, 1 through 10
    // for(int i = 1; i<=10; i++){
    //     int mult = n*i;
    //     printf("%d x %d = %d\n", n, i, mult);
    // }
    int i = 1;
    while(i<=10){
        int mult = n*i;
        i++;
        printf("%d x %d = %d\n", n, i, mult);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printMultiplicationTable(n);
    return 0;
}