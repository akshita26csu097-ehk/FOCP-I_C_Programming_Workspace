#include<stdio.h> //preprocessor directive
int main(){ //entry point of the code which has many in built library functions
    
    // int length = 12; //int is integer means the variable is integer
    // int breadth = 13;
    int length, breadth;

    printf("Enter length\n"); // \n means new line
    scanf("%d" ,&length); // & represents the address of the variable...it tells the variable where the variable is present

    printf("Enter Breadth\n");
    scanf("%d", &breadth) ;
    printf("The area of the rectangle is %d", length*breadth); //printf will print the things written under "" and %d means the value is integer
    return 0; //it marks the end of the code
} 