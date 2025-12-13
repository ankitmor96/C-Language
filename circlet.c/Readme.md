*Program 1: Number Pattern (41 to 45)
Input:


#include<stdio.h>

int main(){

    int num=5;

    for(int i=41;i<=45;i++){
        for(int j=41;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}



Output
41
4142
414243
41424344
4142434445




*Program 2: Continuous Number Pattern
Input:

#include<stdio.h>

int main(){

    int num = 11 ;

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}


Starting number = 11 (hardcoded)
Rows = 4


Output
11
12 13
14 15 16
17 18 19 20





*Program 3: Right Aligned Number Pattern
Input:

#include<stdio.h>

int main(){

   

    for(int i=5;i>=1;i--){

        for(int k=1;k<i;k++){
            printf(" ");
        }
        for(int j=i;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


Rows = 5 (hardcoded)

Output
    1
   12
  123
 1234
12345




Program 4: Left Aligned Descending Pattern
Input

#include<stdio.h>

int main(){

    for(int i=5;i>=1;i--){

        for(int k=5;k>i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


Rows = 5 (hardcoded)


Output
12345
1234
123
12
1




Program 5: Number Pyramid Pattern
Input

#include<stdio.h>

int main(){

    for(int i=5;i>=1;i--){

        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int j=i;j<=5;j++){
            printf("%d",j);
        }
        for(int j=4;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}



Rows = 5 (hardcoded)


Output
    5
   454
  34543
 2345432
123454321


Program 6: Mirror Number Pattern
Input

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



Rows = 5 (hardcoded)

Initial space = 16
Output
1        1
12      21
123    321
1234  4321
1234554321


Program 7: Star Pattern Using Condition
Input


Rows = 3
Columns = 5

Output
