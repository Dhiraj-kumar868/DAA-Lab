/*Write a program to swap pair of elements of an array of n integers from starting. If n is
odd, then last number will be remain unchanged.*/

#include<stdio.h>
int main(){
    int n,i,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers one by one:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("Before Swapping : ");
     for(i=0;i<n;i++){
         printf("%d ",a[i]);
     }
     for(i=0;i<n-1;i++){
         if(i%2!=0){
             continue;
         }
         temp=a[i];
         a[i]=a[i+1];
         a[i+1]=temp;
     }
      printf("\nAfter Swapping : ");
     for(i=0;i<n;i++){
         printf("%d ",a[i]);
     }
    return 0;
}