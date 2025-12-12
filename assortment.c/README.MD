# C Programs Collection – Arrays & 2D Arrays

This repository contains several basic C programs based on 1D and 2D arrays. Each program includes an explanation, source code, and sample output.


📘 1. Largest Element in a 2D Array

=>Description

This program finds and prints the largest element in a 2D array.

=>Source Code

c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter rows: ");
    scanf("%d", &a);

    printf("Enter columns: ");
    scanf("%d", &b);

    int arr[a][b];

    printf("Enter elements of 2D array:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}


=>Sample Output


Enter rows: 2
Enter columns: 3
Enter elements:
1 5 3
9 2 7

Largest element = 9


📘 2. Negative Elements in 1D Array**

=>Description

This program prints only the negative elements of a one-dimensional array.

=>Source Code

c
#include <stdio.h>

int main(){
    int a;

    printf("Enter size of array:");
    scanf("%d", &a);

    int arr[a];

    printf("Enter array elements:\n");
    for(int i=0;i<a;i++){
        scanf("%d", &arr[i]);
    }

    printf("Negative elements:\n");
    for(int i=0;i<a;i++){
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}


=>Sample Output


Enter size of array: 5
Enter elements:
3 -5 9 -2 7

Negative elements:
-5 -2


📘 3. Sum of Each Row & Sum of Each Column (2D Array)

=>Description

This program calculates the row-wise and column-wise sums of a 2D array.

=>Source Code

c
#include <stdio.h>

int main(){
    int a,b;

    printf("Enter the array's row size:");
    scanf("%d", &a);

    printf("Enter the array's column size:");
    scanf("%d", &b);

    int arr[a][b];

    printf("Enter the array elements:\n");

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Sum of each row:\n");
    for(int i=0;i<a;i++){
        int rowSum = 0;
        for(int j=0;j<b;j++){
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i+1, rowSum);
    }

    printf("Sum of each column:\n");
    for(int i=0;i<b;i++){
        int colSum = 0;
        for(int j=0;j<a;j++){
            colSum += arr[j][i];
        }
        printf("Column %d sum = %d\n", i+1, colSum);
    }

    return 0;
}


=>Sample Output


Enter array row size: 2
Enter array column size: 3
Enter array elements:
1 2 3
4 5 6

Sum of each row:
Row 1 sum = 6
Row 2 sum = 15

Sum of each column:
Column 1 sum = 5
Column 2 sum = 7
Column 3 sum = 9


📘 4. Sum of Each Column (2D Array)

=>Description

This program calculates and prints the sum of each column in a 2D array.

=>Source Code

c
#include <stdio.h>

int main(){
    int a,b;

    printf("Enter row size: ");
    scanf("%d", &a);

    printf("Enter column size: ");
    scanf("%d", &b);

    int arr[a][b];
    printf("Enter array elements:\n");

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Sum of each column:\n");
    for(int i=0;i<b;i++){
        int colSum = 0;
        for(int j=0;j<a;j++){
            colSum += arr[j][i];
        }
        printf("Column %d sum = %d\n", i+1, colSum);
    }

    return 0;
}

=>Sample Output


Enter row size: 2
Enter column size: 3
Enter array elements:
1 2 3
4 5 6

Sum of each column:
Column 1 sum = 5
Column 2 sum = 7
Column 3 sum = 9


 📘 5. Transpose of a Matrix (2D Array)

=>Description

This program takes a 2D array from the user and prints its transpose.

=>Source Code

#include <stdio.h>

int main(){
    int a,b;

    printf("Enter the array row size");
    scanf("%d", &a);

    printf("Enter the array column size");
    scanf("%d", &b);

    int arr[a][b];
    printf("Enter the array elements:\n");

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose matrix of an array:\n");
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}

=>Sample Output


Enter the array row size: 2
Enter the array column size: 3
Enter the array elements:
1 2 3
4 5 6

Transpose matrix of an array:
1 4
2 5
3 6


 
