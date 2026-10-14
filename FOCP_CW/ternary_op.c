#include<stdio.h>
int main(void){
    int x=10, y=20;
    // if(x>y)                   //first method
    //     printf("%d\n",x);
    
    // else
    //     printf("%d\n",y);
    
    (x>y)? printf("%d\n",x): printf("%d\n",y);   //second method where we can write in a single line

    int max=(x>y)? x: y;      //third method
    printf("%d\n", max);

    return 0;
}