// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter all three angles : ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);

//     if(a+b+c != 180 || a<0 || b<0 || c<0){
//             printf("I");
//     }
//     else if(a<90 && b<90 && c<90){
//         printf("A");
//     }
//     else if(a==90 || b==90 || c==90){
//         printf("R");
//     }
//     else{
//         printf("O");
//     }
//     return 0;
// }

//Mercer Mettle format
#include<stdio.h>
char Angles(int a, int b, int c){
    if(a+b+c != 180 || a<=0 || b<=0 || c<=0 )
    return 'I';
    else if(a<90 && b<90 && c<90)
    return 'A';
    else if(a==90 || b==90 || c==90)
    return 'R';
    else 
    return 'O';
}
    int main(){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%c", Angles(a, b, c));
    return 0;
}