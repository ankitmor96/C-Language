#include<stdio.h>

int main(){

    int a,b;

    printf("Enter the array row size");
    scanf("%d",&a);

    printf("Enter the array column size");
    scanf("%d",&b);

    int arr[a][b];
     printf("Enter the array elements:\n");

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("transpose matrix of an array:\n");
    for(int i=0;i<a;i++){

       for(int j=0;j<b;j++){
        printf(" %d",arr[i][j]);
       }
        printf("\n");
    }
    

    return 0;
}