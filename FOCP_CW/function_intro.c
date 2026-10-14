// SYNTAX
// Return type   function name(datatype parameter, datatype para 2...)
//{

//          body & return

//}

// int add(int a, int b)
// {
//     return(a+b);
// }

// return type -----> int
// name ------> add
// parameters ------> int a, int b

// Prototype---> Definition-----> Call

#include<stdio.h>
//function definition
int add(int x, int y)
{
    return x+y;
}

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
