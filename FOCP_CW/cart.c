#include<stdio.h>
int main(void){
    char product[] = "Book";
    int quantity = 1;
    float price = 500.98;
    char categorycode = 'B';
    unsigned int stockcount = 6;

    printf("===========================\n");
    printf("        Cart Details\n");
    printf("===========================\n");
    printf("Product name  :%10s\n", product);
    printf("Quantity      :%10d\n",quantity);
    printf("Price         :%10.2f\n",price);
    printf("Category Code :%10c\n",categorycode);
    printf("Stock Count   :%10d\n",stockcount);
    printf("============================\n");
    return 0;

}