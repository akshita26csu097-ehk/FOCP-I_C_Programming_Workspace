// #include<stdio.h>
// int main(){
//     int unit;
//     scanf("%d", &unit);
//     if (unit>0 && unit<=100){
//         printf("%d", unit*2);
//     }
//     else if (unit>=101 && unit<=200){
//         printf("%d", unit*3);
//     }
//     else if (unit>200){
//         printf("%d", unit*5);
//     }
    
//     return 0;
// }

//for output=750

// #include<stdio.h>
// int main(){
//     int unit, bill;
//     scanf("%d", &unit);
//     if(unit<=100){
//         bill = unit*2;
//         printf("%d", bill);
//     }
//     else if(unit>=101 && unit<=200){
//         bill = 100*2 + (unit - 100)*3;
//         printf("%d", bill);
//     }
//     else if (unit>200){
//         bill = 100*2 + 100*3 + (unit - 200)*5;
//         printf("%d", bill);
//     }
//     return 0;
// }

//Mercer mettle format

#include<stdio.h>
int ElectricityBill(int units)
{
    if(units<=100)
        return units*2;
        
    else if(units>=100 && units<=200)
        return ((100*2) + (units - 100)*3);
        
    else if(units>200)
        return ((100*2) + (100*3) + (units-200)*5);
}
// no need to write this in mercer mettle 
int main(){
    int units;
    scanf("%d", &units);
    printf("%d" , ElectricityBill(units));
    return 0;
}