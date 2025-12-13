📘 C Pointer Programs – README

This repository contains basic pointer programs in C, covering pointer arithmetic, pointer to variable, pointer to pointer, array with pointer, and call by value vs call by reference.

🔹 1). Array Elements Using Pointer Arithmetic
📌 Description

This program accesses array elements using a pointer and pointer arithmetic.

💻 Source Code
#include <stdio.h>

int main(){
    int array[6] = {11,12,13,14,15};
    int *ptr = &array;

    for(int i = 0; i <= 5; i++){
        printf("%u => %d\n", ptr + i, *(ptr + i));
    }
    return 0;
}

🧾 Input
Array = {11, 12, 13, 14, 15}

📤 Output (Address may vary)
6422292 => 11
6422296 => 12
6422300 => 13
6422304 => 14
6422308 => 15

🔹 2). Pointer Address and Scaling
📌 Description

This program demonstrates pointer address and pointer scaling.

💻 Source Code
#include <stdio.h>

int main(){
    int a = 14;
    int *ptr = &a;

    printf("address of pointer: %u\n", ptr);
    printf("scaling value of pointer: %u\n", ptr + 1);

    return 0;
}

🧾 Input
a = 14

📤 Output (Address may vary)
address of pointer: 6422292
scaling value of pointer: 6422296

🔹 3). Modify Variable Using Pointer
📌 Description

This program changes the value of a variable using a pointer.

💻 Source Code
#include <stdio.h>

int main(){
    int a = 8;
    int *ptr = &a;

    *ptr = 5;

    printf("pointer address: %u\n", ptr);
    printf("a value: %d\n", a);

    return 0;
}

🧾 Input
a = 8

📤 Output
pointer address: 6422292
a value: 5

🔹 4). Pointer to Pointer Example
📌 Description

This program demonstrates a pointer to pointer concept.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 7;
    int *ptr = &num;
    int **p = &ptr;

    printf("%d\n", num);
    printf("%d\n", *ptr);
    printf("%d\n", **p);

    return 0;
}

🧾 Input
num = 7

📤 Output
7
7
7

🔹 5). Call by Value (No Change in Original Variable)
📌 Description

This program shows call by value, where changes inside the function do not affect the original variable.

💻 Source Code
#include <stdio.h>

void change(int x){
    x = 10;
}

int main(){
    int num = 30;
    change(num);
    printf("%d", num);

    return 0;
}

🧾 Input
num = 30

📤 Output
30

🔹 6). Call by Reference Using Pointer
📌 Description

This program demonstrates call by reference, where the function modifies the original value using a pointer.

💻 Source Code
#include <stdio.h>

void change(int *x){
    *x = 15;
}

int main(){
    int num = 60;
    change(&num);
    printf("%d", num);

    return 0;
}

🧾 Input
num = 60

📤 Output
15

