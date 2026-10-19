#include<stdio.h>
char Schlorship(int marks, int attendance){
    if(marks>=90 && attendance>=70){
        return 'S';
    }
    else if(marks>=75 && attendance>=75){
        return 'E';
    }
    else{
        return 'N';
    }
}
int main(void){
    int marks, attendance;
    printf("Marks = ");
    scanf("%d", &marks);
    printf("Attendace = ");
    scanf("%d", &attendance);
    printf("%c", Schlorship(marks, attendance));
    return 0;
}