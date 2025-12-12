#include <stdio.h>

int main() {
    int  space = 16;

    for( int i=1;i<=5;i++){

        for( int j=1;j<=i;j++){
            printf("%d ", j);
        }

        for( int k=1;k<=space;k++){
             printf(" ");
        }

        for( int j=i;j>=1;j--){
            printf("%d ", j);
        }

        space -= 4;

        printf("\n");
    }

    return 0;
}