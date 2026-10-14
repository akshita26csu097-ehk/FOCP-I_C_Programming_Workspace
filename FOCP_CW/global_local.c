#include<stdio.h>
int x;
void change(){
    x=20;
    
}
int main(void)
{
    int x=10;
    printf("%d\n", x);
    change();
    printf("%d\n",x);
    return 0;
}

//x is again stored locally
