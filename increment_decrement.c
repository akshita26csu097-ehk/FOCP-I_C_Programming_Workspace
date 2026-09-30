#include<stdio.h>
int main(){
    // int x = 10;
    // printf("%d\n", x);
    // x++; //postfic x=x+1
    // printf("%d\n",x);
    // ++x; //prefix x=x+1
    // printf("%d\n",x);
    // printf("%d\n", ++x);

    // printf("%d\n", ++x);
    // printf("%d\n", x++);
    // printf("%d\n", x);

    // int x = 10;
    // int y;
    // y=x++;
    // printf("x=%d, y=%d", x,y);

    int x = 10;
    int y = 2;
    int z = 5;
    int result= x++ + --y + ++z;
    printf("x=%d, y = %d, z=%d, result=%d", x,y,z,result);
    return 0;
}
