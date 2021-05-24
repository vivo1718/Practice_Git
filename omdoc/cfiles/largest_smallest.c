#include<stdio.h>
int largest(int ar[]);
 int smallest(int ar[]);
 int main(){
     int ar[10],i,n;
     printf("enter the total elements in array\n");
     scanf("%d",&n);
     printf("enter the array elements one by one\n");
     for(i=0;i<=n;i++){
         scanf("%d",&ar[i]);
     }
     printf("Your entered elements are\n");
     for(i=0;i<=n;i++){
         printf("%d",ar[i]);
     }


 }