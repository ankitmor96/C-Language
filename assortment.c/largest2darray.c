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
