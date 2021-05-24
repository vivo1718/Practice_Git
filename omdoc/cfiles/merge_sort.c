#include<stdio.h>
#include<stdlib.h>
#define MAX 30
void merge_sort(int [],int ,int);/*dividing the array into two parts*/
void merge(int [],int,int);/*conquering the numbers in ascending order*/
void main(){

int v[20],n;
printf("Enter the value of  upper bound\n");
scanf("%d",&n);
printf("enter the  array elemnts\n");
for(int m=0;m<n;m++){
scanf("%d",&v[m]);
}
merge_sort(v,0,n-1);
}

void merge_sort(int a[],int lb,int ub){
    int mid;
    mid = (lb+ub)/2;
    if(lb<ub){
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,ub);
    }
}
void merge(int a[],int lb,int ub){
     int i,j,k,mid,b[MAX],l=0;
     i=lb;
     mid = (i+j)/2;
     j=ub;
     k=mid+1;
     
     while(i<=mid && k<=j){
             if(a[i]<a[k]){
                 b[l++]=a[i++];
             }
             else{
                 b[l++]=a[k++];
             }
     }
     if(i>mid){
         b[l++]=a[k++];

     }
     else{
         if(i<=mid){
         b[l++] = a[i++];
     }
}
}
