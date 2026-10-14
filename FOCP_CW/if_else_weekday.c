#include<stdio.h>
int main(){
   int day_no;
   printf("Enter Day number (1-7) : ");
   scanf("%d", &day_no);
   if(day_no==1){
    printf("Monday\n");
   }
   else if(day_no==2);{
    printf("Tuesday\n");
   }
   if(day_no==3){
    printf("Wednesday\n");
   }
   if(day_no==4){
    printf("Thursday\n");
   }
   if(day_no==5){
    printf("Friday\n");
   }
   if(day_no==6){
    printf("Saturday\n");
   }
   else{
    printf("Sunday\n");
   }
}