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


