#include<stdio.h>
int main(){
    //it will create an array of 6 and initialise it with given charectors
    char str[] = {'h','e','l','l','o','\0'};
    //it will create an array of 6 and add NULL('\0')at the end of the string
    char str1[] = "hello";
    printf("string : ");
    printf("%s\n",str);

    //taking input for string with spaces
    //1. using charector pattern, scanf will terminate on newline('\n') not on space
    char str2[20];
    scanf("%[^\n]c", str2);
    printf("New string : ");
    printf("%s\n", str2);

    char str3[20];
    //2. using fgets function will terminate on newline ('\n') not on space
    fgets(str3, 19, stdin); //here tdin is standard input(keyboard)
    printf("New string :");
    printf("%s\n", str3);

    printf("read string charector by charector \n");

    for(int i=0; str[i]!='\0'; i++){
        printf("str[%d] = %c\n", i, str[i]);
    }
    // convert small case to upper case letters
    for(int i =0; str[i]!='\0'; i++){
        if (str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
    printf("upper case string : ");
    printf("%s\n", str);
    return 0;
}
