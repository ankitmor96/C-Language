📘 Program 1: Number Pattern (41 to 45)
🔹 Description

Prints increasing number patterns starting from 41 to 45.

🔹 Source Code
#include<stdio.h>

int main(){
    int num = 5;

    for(int i = 41; i <= 45; i++){
        for(int j = 41; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🔹 Input
No user input

🔹 Output
41
4142
414243
41424344
4142434445

📘 Program 2: Continuous Number Pattern
🔹 Description

Prints numbers continuously starting from 11 using nested loops.

🔹 Source Code
#include<stdio.h>

int main(){
    int num = 11;

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

🔹 Input
No user input

🔹 Output
11
1213
141516
17181920

📘 Program 3: Right Aligned Number Pattern
🔹 Description

Prints a right-aligned triangle number pattern.

🔹 Source Code
#include<stdio.h>

int main(){
    for(int i = 5; i >= 1; i--){
        for(int k = 1; k < i; k++){
            printf(" ");
        }
        for(int j = i; j <= 5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🔹 Input
No user input

🔹 Output
    5
   45
  345
 2345
12345

📘 Program 4: Number Pyramid Pattern
🔹 Description

Prints a pyramid-style number pattern using spaces.

🔹 Source Code
#include<stdio.h>

int main(){
    for(int i = 5; i >= 1; i--){
        for(int k = 5; k > i; k--){
            printf(" ");
        }
        for(int j = i; j <= 5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🔹 Input
No user input

🔹 Output
5
 45
  345
   2345
    12345

📘 Program 5: Mirror Number Pattern
🔹 Description

Prints a mirrored number pattern (ascending + descending).

🔹 Source Code
#include<stdio.h>

int main(){
    for(int i = 5; i >= 1; i--){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int j = i; j <= 5; j++){
            printf("%d", j);
        }
        for(int j = 4; j >= i; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

🔹 Input
No user input

🔹 Output
    5
   454
  34543
 2345432
123454321

📘 Program 6: Diamond Number Pattern
🔹 Description

Prints a diamond-style number pattern using spaces.

🔹 Source Code
#include<stdio.h>

int main(){
    int space = 16;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }

        for(int k = 1; k <= space; k++){
            printf(" ");
        }

        for(int j = i; j >= 1; j--){
            printf("%d ", j);
        }

        space -= 4;
        printf("\n");
    }
    return 0;
}

🔹 Input
No user input

🔹 Output
1        1
1 2    2 1
1 2 3 3 2 1
1 2 3 4 4 3 2 1
1 2 3 4 5 5 4 3 2 1

📘 Program 7: Star Pattern with Conditions
🔹 Description

Prints a star pattern using conditional logic.

🔹 Source Code
#include<stdio.h>

int main(){
    int i, j;

    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 5; j++){
            if(i == 2 && j > 1 && j < 5)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    printf("*\n*\n");
    return 0;
}

🔹 Input
No user input

🔹 Output
* * * * *
*       *
* * * * *
*
*

