#include<stdio.h>

int main(){

    int a,b;

    printf("Enter the array's row size:");
    scanf("%d",&a);

    printf("Enter the array's column size");
    scanf("%d",&b);

    int arr[a][b];

     printf("Enter the array elements:\n");

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }

  

   
    printf("sum of each row:\n");
    for(int i=0;i<a;i++){
        int rowSum=0;
       for(int j=0;j<b;j++){
            rowSum += arr[i][j];
       }
        printf("%d row sum = %d\n",i+1,rowSum);
    }
    

    printf("sum of each column:\n");
    for(int i=0;i<a;i++){
        int colSum=0;
       for(int j=0;j<b;j++){
            colSum += arr[i][j];
       }
        printf("%d colsum = %d\n",i+1,colSum);
    }
    

    return 0;
}