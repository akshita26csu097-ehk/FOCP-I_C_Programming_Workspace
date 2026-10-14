#include<stdio.h>
float toFahrenheit(float c)
{
    return c*1.8f + 32;
}
int main(void){
    float c;
    scanf("%f", &c);
    printf("%.1f", toFahrenheit(c));
    return 0;
}