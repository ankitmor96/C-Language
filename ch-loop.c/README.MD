📘 C Loop Programs – README

This repository contains basic C programs using loops such as for loop, while loop, do-while loop, and a logic-based program using loops.

🔹 1). Print Numbers from 0 to 99 using for Loop
📌 Description

This program prints numbers from 0 to 99 using a for loop.

💻 Source Code
#include <stdio.h>

int main(){
    int i;

    for(i = 0; i <= 99; i++){
        printf("%d ", i);
    }
    return 0;
}

🧾 Input
No input

📤 Output
0 1 2 3 4 5 ... 99

🔹 2). Print Numbers from 10 to 20 using while Loop
📌 Description

This program prints numbers from 10 to 20 using a while loop.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 10;

    while(num <= 20){
        printf("%d ", num);
        num++;
    }
    return 0;
}

🧾 Input
No input

📤 Output
10 11 12 13 14 15 16 17 18 19 20

🔹 3). Print Alphabets with Gap using do-while Loop
📌 Description

This program prints alphabets starting from a and skips 4 characters each time using a do-while loop.

💻 Source Code
#include <stdio.h>

int main(){
    char letter = 'a';

    do{
        printf("%c ", letter);
        letter = letter + 4;
    } while(letter <= 'z');

    return 0;
}

🧾 Input
No input

📤 Output
a e i m q u y

🔹 4). Print Alphabets from a to z using for Loop
📌 Description

This program prints all lowercase alphabets from a to z using a for loop.

💻 Source Code
#include <stdio.h>

int main(){
    char i;

    for(i = 'a'; i <= 'z'; i++){
        printf("%c ", i);
    }
    return 0;
}

🧾 Input
No input

📤 Output
a b c d e f g ... z

🔹 5). Print Alphabets from a to z using while Loop
📌 Description

This program prints alphabets from a to z using a while loop.

💻 Source Code
#include <stdio.h>

int main(){
    char letter = 'a';

    while(letter <= 'z'){
        printf("%c ", letter);
        letter++;
    }
    return 0;
}

🧾 Input
No input

📤 Output
a b c d e f g ... z

🔹 6). Sum of First and Last Digit of a Number
📌 Description

This program finds the sum of the first and last digit of a given number using a loop.

💻 Source Code
#include <stdio.h>

int main() {
    int num, lastDigit, firstDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while(num >= 10) {
        num = num / 10;
    }

    firstDigit = num;

    int sum = firstDigit + lastDigit;
    printf("Sum of First and Last Digit = %d\n", sum);

    return 0;
}

🧾 Input
Enter any number: 1234

📤 Output
Sum of First and Last Digit = 5

