#include<stdio.h>
// function prototype
int add(int, int);

int main(void)
{
    int x,y;
    x=10;
    y=20;
    int result=add(x,y); //function call to store output of add function
    printf("%d\n", result); // print result
    printf("%d\n", add(12,5)); //fucntion call
    return 0;
}

//function definition
int add(int x, int y)   //x&y are parameters and 10,20 are arguments
{
    return x+y;
}

