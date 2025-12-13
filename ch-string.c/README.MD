📘 Character Array & String Basics in C – README

This repository contains basic C programs on character arrays (strings), showing how characters, strings, static & dynamic access, and character modification work in C.

🔹 1). Printing Character Array (String Initialization)
📌 Description

This program demonstrates manual string initialization using a character array and prints it.

💻 Source Code
#include <stdio.h>

int main(){
    char greeting[] = {'h','e','l','l','o','\0'};
    printf("%s\n", greeting);
    return 0;
}

🧾 Input
No input

📤 Output
hello

🔹 2). Static and Dynamic Access of String Characters
📌 Description

This program prints characters of a string using:

Static access (index by index)

Dynamic access (loop)

💻 Source Code
#include <stdio.h>

int main(){
    char letter[6] = "hello";

    // static
    printf("%c\n", letter[0]);
    printf("%c\n", letter[1]);
    printf("%c\n", letter[2]);
    printf("%c\n", letter[3]);
    printf("%c\n", letter[4]);

    // dynamic
    for(int i = 0; i < 4; i++){
        printf("%c\n", letter[i]);
    }

    return 0;
}

🧾 Input
No input

📤 Output
h
e
l
l
o
h
e
l
l

🔹 3). Print String and Characters Using Loop
📌 Description

This program prints the entire string and then prints each character using a loop until '\0'.

💻 Source Code
#include <stdio.h>

int main(){
    char letter[6] = {'h','e','l','l','o','\0'};

    printf("%s\n", letter);

    for(int i = 0; letter[i] != '\0'; i++){
        printf("%c", letter[i]);
    }

    return 0;
}

🧾 Input
No input

📤 Output
hello
hello

🔹 4). Modify Character in a String (Static Method)
📌 Description

This program modifies a character inside a string using index position.

💻 Source Code
#include <stdio.h>

int main(){
    char letter[6] = "world";

    letter[1] = 'a';

    printf("%s\n", letter);
    return 0;
}

🧾 Input
Original string = "world"
Change index 1 to 'a'

📤 Output
warld

