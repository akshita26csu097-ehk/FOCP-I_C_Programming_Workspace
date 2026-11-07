
#include <stdio.h>

// Function declarations
int stringLength(const char str[]);
void toLower(char str[]);
void toUpper(char str[]);
int wordCount(const char str[]);
void reverse(char str[]);
void swap(char *x, char *y);
int palindrome(const char str[]);

int main() {
    char str[] = "Hello World";

    printf("Original string: %s\n", str);

    printf("String length: %d\n", stringLength(str));

    printf("Word count: %d\n", wordCount(str));

    char lower[] = "Hello World";
    toLower(lower);
    printf("Lowercase: %s\n", lower);

    char upper[] = "Hello World";
    toUpper(upper);
    printf("Uppercase: %s\n", upper);

    char rev[] = "Hello World";
    reverse(rev);
    printf("Reversed string: %s\n", rev);

    char str[] = "madam";

if (palindrome(str)) {
    printf("Palindrome");
} else {
    printf("Not a palindrome");
}
    return 0;
}

// 1. String length
int stringLength(const char str[]) {
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    return length;
}

// 2. Convert to lowercase
void toLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

// 3. Convert to uppercase
void toUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

// 4. Count words
int wordCount(const char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    return count;
}

// 5. Reverse string
void reverse(char str[]) {
    int length = stringLength(str);

    for (int i = 0; i < length / 2; i++) {    
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // int length = stringLength(str);         (class solution)
    // for(int i = 0, j = length-1; i<j; i++, j--){
    //     swap(&str[i], &str[j]);
    // }
}

//6. Palindrome
int palindrome(const char str[]) {
    int length = stringLength(str);

    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }

    return 1;
}