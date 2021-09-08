/*Write a program by using an user defined function for computing ⌈ √n⌈ for any
positive integer n. Besides assignment and comparison, your algorithm may only use the
four basic arithmetical operations.*/



#include<stdio.h>
int isqrt(int num){
    if(num==0 || num==1){
        return num;
    }
    int i=1,result=1;
    while(result<=num){
        i++;
        result=i*i;
    }
    return i-1;
}
int main(){
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("Square root of %d is %d",n,isqrt(n));
   return 0;
}

