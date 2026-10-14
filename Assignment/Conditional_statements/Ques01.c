//Normal coding
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter first no : ");
//     scanf("%d", &a);
//     printf("Enter second no : ");
//     scanf("%d", &b);
//     printf("Enter third no : ");
//     scanf("%d", &c);

//     if(a>b && a<c){ //bac
//         printf("%d",a);
//     } 
//     else if(b>a && b<c){
//         printf("%d", b);
//     }
//     else{
//         printf("%d",c);
//     }

//     return 0;
// }

//Mercer Mettle Format
#include<stdio.h>
int MiddleNumber(int n1, int n2, int n3) 
{
    if ((n1 >= n2 && n1 <= n3) || (n1 <= n2 && n1 >= n3))
        return n1;
    else if ((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3))
        return n2;
    else
        return n3;
}

int main()
{
    int a, b, c;

    printf("Enter first no : ");
    scanf("%d", &a);
    printf("Enter second no : ");
    scanf("%d", &b);
    printf("Enter third no : ");
    scanf("%d", &c);

    printf("%d\n", MiddleNumber(a, b, c));
    return 0;
}

