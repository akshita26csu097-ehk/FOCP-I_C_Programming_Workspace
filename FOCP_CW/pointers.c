#include<stdio.h>
void swap(int*x, int*y){
}
int main(){

        int x = 25;
        int *p = &x;
        printf("x=%d\n", x);
        printf("%d\n", *p);
        x++;
        p++;
        printf("x=%d\n",x);
        printf("%d\n",*p);
        int *p2=p+2;  //add 2*size of int
        printf("%d\n", p2-p);  //difference in bytes 
        printf("%d\n", sizeof(int));
        return 0;
}