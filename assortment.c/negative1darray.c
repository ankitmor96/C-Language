/*#include<stdio.h>

int main(){
  int n=5;
    int letter[5]={2,-4,1,-3,-5};
    

    for(int i=0;i<=n-1;i++){
       if(letter[i]<0){
         printf("%d\n",letter[i]);
       }
    }

return 0;
}*/

#include <stdio.h>


int main(){

    int a;

printf("enter sizeof array:");
scanf("%d",&a);

int arr[a];

printf("Enter array's elements:%d\n",a);

for(int i=0;i<a;i++){
    printf("enter elements:");
    scanf("%d",&arr[i]);
}

 printf("nagative elements:\n");

for(int i=0;i<a;i++){
   

    if(arr[i] < 0){
        printf("%d",arr[i]);
    }
}
return 0;

}

