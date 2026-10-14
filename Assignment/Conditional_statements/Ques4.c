// #include<stdio.h>
// int main(){
//     int a,b;
//     char c;
//     printf("Enter two numbers and operator [+,-,*,/,%%] : ");
//     scanf(" %d %d %c", &a, &b,&c);

//     switch(c){
//         case '+' :
//           printf("%d", a+b);
//           break;
//         case '-' :
//           printf("%d", a-b);
//           break;
//         case '*' :
//           printf("%d", a*b);
//           break;
//         case '/' :
//           if( b==0 ){
//             printf("Cannot divide by zero");
//           }
//           else{
//             printf("%d", a/b);
//           }
//           break;
//         case '%' :
//           printf("%d", a%b);
//           break;
//         default: 
//           printf("Error");       
//     }

//     return 0;
// }

//Mercer mettle format

#include<stdio.h>
int Calculator(int no1, int no2, char op)
{
    switch(op){
        case '+' : 
          return (no1+no2);
          break;
        case '-' : 
          return (no1-no2);
          break;
        case '*' : 
          return (no1*no2);
          break;
        case '/' : 
          if(no2==0)
          printf("Cannot divide by 0");
          else 
          return(no1/no2);
          break;
        case '%' : 
          return(no1%no2);
          break;
        default:
          printf("Error");
    }
    return 0; 
}
int main(){
    int no1, no2;
    char op;
    scanf("%d %d %c", &no1, &no2, &op);
    printf("%d", Calculator(no1, no2, op));
    return 0;
}