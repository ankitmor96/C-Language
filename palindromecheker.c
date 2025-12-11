#include <stdio.h>

int main() {
    char str[50];
    int i, length = 0, letter = 0;

    printf("Enter your str:- ");
    fgets(str, sizeof(str), stdin);  

   
    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            letter = 1;
            break;
        }
    }

    if (letter == 0)
        printf("Given str is palindrome");
    else
        printf("Given str is not palindrome");

    return 0;
}