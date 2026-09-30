#include<stdio.h>
int main(void){
  char name[] = "John Doe";
  int age = 10;
  float percentage = 98.7867;
  printf("======================\n");
  printf("    Student Details\n");
  printf("======================\n");
  printf("Name     :%10s\n",name);
  printf("Age      :%10d\n",age);
  printf("Progress :%10.2f\n",percentage);
  printf("======================\n");
  
  return 0;
}