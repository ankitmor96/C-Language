📘 Number Pattern Programs in C – README

This repository contains basic number pattern programs using nested for loops in C. These programs help beginners understand loop control and pattern logic.

🔹 1). Increasing Number Triangle Pattern
📌 Description

This program prints a right-angled triangle where numbers increase row by row.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 5;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🧾 Input
num = 5

📤 Output
1
12
123
1234
12345

🔹 2). Decreasing Number Triangle Pattern
📌 Description

This program prints a reverse number triangle using nested loops.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 5;

    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🧾 Input
num = 5

📤 Output
12345
1234
123
12
1

🔹 3). Reverse Number Printing Pattern
📌 Description

This program prints numbers in descending order inside each row.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 5;

    for(int i = 5; i >= 1; i--){
        for(int j = i; j <= num; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🧾 Input
num = 5

📤 Output
5
45
345
2345
12345

🔹 4). Square Number Pattern
📌 Description

This program prints a square pattern of numbers.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 5;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🧾 Input
num = 5

📤 Output
12345
12345
12345
12345
12345

🔹 5). Repeating Row Number Pattern
📌 Description

This program prints the same number repeatedly in each row.

💻 Source Code
#include <stdio.h>

int main(){
    int num = 5;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

🧾 Input
num = 5

📤 Output
11111
22222
33333
44444
55555

