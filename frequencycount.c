
#include <stdio.h>

int main() {
    char str[50];
    int freq[256] = {0};  
    int i;

    printf("Enter a str: ");
    fgets(str, sizeof(str), stdin);  

   
    for (i = 0; str[i] != '\0'; i++) {
        freq[( char)str[i]]++;
    }

    printf("\nChar Freq:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' => %d times\n", i, freq[i]);
        }
    }

    return 0;
}