📘 C Functions Programs – README

This repository contains basic C programs using functions, including functions with arguments, without arguments, return values, void functions, and recursion.

🔹 1). Function with Arguments and Return Value (Addition)
📌 Description

This program demonstrates a user-defined function that takes two arguments and returns their sum.

💻 Source Code
#include <stdio.h>

// function declaration
int sum(int a, int b){
    return a + b;
}

int main(){
    int result = sum(20, 8);
    printf("result: %d", result);
    return 0;
}

🧾 Input
a = 20
b = 8

📤 Output
result: 28

🔹 2). Void Function (No Return Value)
📌 Description

This program uses a void function that prints a message.

💻 Source Code
#include <stdio.h>

void quote(){
    printf("you protected dharma, dharma always protected you");
}

int main(){
    quote();
    return 0;
}

🧾 Input
No input

📤 Output
you protected dharma, dharma always protected you

🔹 3). Function with No Arguments and Return Value
📌 Description

This program demonstrates a function without arguments that returns a value.

💻 Source Code
#include <stdio.h>

int multiplication(){
    return 5 - 3;
}

int main(){
    int result1 = multiplication();
    printf("result1: %d", result1);
    return 0;
}

🧾 Input
No input

📤 Output
result1: 2

🔹 4). Function Passing String as Argument
📌 Description

This program passes a string to a function and prints it.

💻 Source Code
#include <stdio.h>

void word(char ankit[]){
    printf("%s\n", ankit);
}

int main(){
    word("hello");
    return 0;
}

🧾 Input
"hello"

📤 Output
hello

🔹 5). Function to Find Square of a Number
📌 Description

This program calculates the square of a number using a function.

💻 Source Code
#include <stdio.h>

int square(int a){
    return a * a;
}

int main(){
    int result1 = square(5);
    printf("result1: %d\n", result1);
    return 0;
}

🧾 Input
a = 5

📤 Output
result1: 25

🔹 6). Recursive Function – Factorial of a Number
📌 Description

This program calculates the factorial of a number using recursion.

💻 Source Code
#include <stdio.h>

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int result1 = factorial(5);
    printf("%d\n", result1);
    return 0;
}

🧾 Input
n = 5

📤 Output
120

