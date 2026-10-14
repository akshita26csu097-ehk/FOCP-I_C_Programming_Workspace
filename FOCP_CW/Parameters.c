//Parameters are local variables. The parameter belongs to the function call.
#include<stdio.h>
int change(int x){
    x=20;
    return x;
}
int main(void)
{
    int x=10;
    printf("%d\n", x);
    x=change(x);
    printf("%d\n",x);
    return 0;
}
//Changing the parameter does not automatically change the caller's variable.