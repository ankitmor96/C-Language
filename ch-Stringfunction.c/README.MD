📘 C String Functions Programs – README

This repository contains basic C programs using string functions and character handling, useful for beginners to understand how strings work internally in C.

🔹 1). String Comparison using strcmp()
📌 Description

This program compares two strings using the strcmp() function.

💻 Source Code
#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "hello";
    char word2[] = "ankit";

    int result1 = strcmp(word, word2);
    printf("result1: %d", result1);

    return 0;
}

🧾 Input
word  = "hello"
word2 = "ankit"

📤 Output
result1: 1

🔹 2). String Concatenation using strcat()
📌 Description

This program joins two strings into one using strcat().

💻 Source Code
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "ankit";
    char greeting1[] = "mor";

    strcat(greeting, greeting1);
    printf("greeting: %s", greeting);

    return 0;
}

🧾 Input
greeting  = "ankit"
greeting1 = "mor"

📤 Output
greeting: ankitmor

🔹 3). String Copy using strcpy()
📌 Description

This program copies one string into another using strcpy().

💻 Source Code
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "hii good morning";
    char copystring[sizeof(greeting)];

    strcpy(copystring, greeting);
    printf("copystring: %s", copystring);

    return 0;
}

🧾 Input
greeting = "hii good morning"

📤 Output
copystring: hii good morning

🔹 4). Find String Length using strlen()
📌 Description

This program calculates the length of a string using strlen().

💻 Source Code
#include <stdio.h>
#include <string.h>

int main() {
    char syntax[] = "1234";

    int syntaxLength = strlen(syntax);
    printf("%d\n", syntaxLength);

    return 0;
}

🧾 Input
syntax = "1234"

📤 Output
4

🔹 5). Convert String to Lowercase (Without strlwr())
📌 Description

This program converts an uppercase string to lowercase using tolower().

💻 Source Code
#include <stdio.h>
#include <ctype.h>

int main() {
    char greeting[] = "ANKIT";
    char lowercase[sizeof(greeting)];
    int j;

    for (j = 0; greeting[j] != '\0'; j++) {
        lowercase[j] = tolower(greeting[j]);
    }

    lowercase[j] = '\0';
    printf("lowercase: %s", lowercase);

    return 0;
}

🧾 Input
greeting = "ANKIT"

📤 Output
lowercase: ankit

🔹 6). Reverse a String using Loop
📌 Description

This program reverses a string without using string functions.

💻 Source Code
#include <stdio.h>
#include <string.h>

int main() {
    char letter[] = "ankit";
    char reverseletter[sizeof(letter)];

    int length = strlen(letter);
    int i, j;

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reverseletter[j] = letter[i];
    }

    reverseletter[j] = '\0';
    printf("reverseletter: %s", reverseletter);

    return 0;
}

🧾 Input
letter = "ankit"

📤 Output
reverseletter: tikna

🔹 7). Convert String to Uppercase (Without strupr())
📌 Description

This program converts a lowercase string to uppercase using toupper().

💻 Source Code
#include <stdio.h>
#include <ctype.h>

int main() {
    char word[] = "ankit";
    char uppercase[sizeof(word)];
    int i;

    for (i = 0; word[i] != '\0'; i++) {
        uppercase[i] = toupper(word[i]);
    }

    uppercase[i] = '\0';
    printf("uppercase: %s\n", uppercase);

    return 0;
}

🧾 Input
word = "ankit"

📤 Output
uppercase: ANKIT

