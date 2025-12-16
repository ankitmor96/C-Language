1) Factorial of a Number (Using Loop)
#include <stdio.h>

int main() {
    int num;
    long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers");
    } else {
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %lld", num, fact);
    }

    return 0;
}

2) Count Occurrences of Each Vowel (Using Function)
#include <stdio.h>

void countVowels(char str[]) {
    int a=0, e=0, i=0, o=0, u=0;

    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j]=='a' || str[j]=='A') a++;
        else if (str[j]=='e' || str[j]=='E') e++;
        else if (str[j]=='i' || str[j]=='I') i++;
        else if (str[j]=='o' || str[j]=='O') o++;
        else if (str[j]=='u' || str[j]=='U') u++;
    }

    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", a,e,i,o,u);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countVowels(sentence);

    return 0;
}

3) Check Leap Year (Using Function)
#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a Leap Year", year);
    else
        printf("%d is Not a Leap Year", year);

    return 0;
}

4) Swap Two Numbers Using Pointers
#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d", x, y);

    return 0;
}

5) Pattern Program (Nested for Loop)

Note: _ is considered as whitespace

Output Pattern
        *
      * *
    * * *
  * * * *
* * * * *

Program
#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {

        for (space = 1; space <= 5 - i; space++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}















