#include<stdio.h>
char calculateGrade(int marks) {
// TODO: determine and return the grade
    if(marks>=90 )
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=70)
    return 'C';
    else if(marks>=60)
    return 'D';
    else if(marks<60)
    return 'F';

}
int main(void){
    int marks;
    scanf("%d", &marks);
    printf("%c", calculateGrade(marks));
    return 0;
}