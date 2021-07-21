/*Write a program using a function for computing ⌊√n⌋ for any positive integer. Besides
assignment and comparison, your algorithm may only use the four basic arithmetic
operations.
Hints: In number theory, the integer square root (isqrt) of a positive integer n is the
positive integer m which is the greatest integer less than or equal to the square root of n,
isqrt(n)=⌊√n⌋*/

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


 