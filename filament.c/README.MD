🧵 C String Programs Collection

This repository contains basic string-handling programs in C implemented without using string library functions.
These programs help understand character arrays, ASCII values, loops, and logic building.

📘 Program 1): Frequency of Characters in a String
🔹 Description

This program reads a string from the user and counts the frequency of each character using an array of size 256 (ASCII table).

🔹 Source Code
#include <stdio.h>

int main() {
    char str[50];
    int freq[256] = {0};
    int i;

    printf("Enter a str: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nChar Freq:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c -> %d times\n", i, freq[i]);
        }
    }

    return 0;
}

🔹 Input
Enter a str: hello

🔹 Output
Char Freq:
h -> 1 times
e -> 1 times
l -> 2 times
o -> 1 times

📘 Program 2): Palindrome String Check (Without String Functions)
🔹 Description

This program checks whether a given string is a palindrome (same forward and backward) without using string functions.

🔹 Source Code
#include <stdio.h>

int main() {
    char str[50];
    int i, length = 0, letter = 0;

    printf("Enter your str: ");
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

🔹 Input
Enter your str: madam

🔹 Output
Given str is palindrome

🔹 Another Example

Input

Enter your str: hello


Output

Given str is not palindrome

