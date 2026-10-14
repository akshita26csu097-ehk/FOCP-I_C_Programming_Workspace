#include<stdio.h>
int x;
void change(){
    x=20;
    
}
int main(void)
{
    x=10;
    printf("%d\n", x);
    change();
    printf("%d\n",x);
    return 0;
}

// x is a global variable now and can be changed by anyone.