/*Write a program that takes three variable (a, b, c) as separate parameters and rotates the
values stored so that value a goes to be, b, b to c and c to a by using SWAP(x,y)
function that swaps/exchanges the numbers x & y.*/

#include <stdio.h>
void swap(int *x,int *y)
{
	int z=*x ;
	*x=*y ;
	*y=z ;
}
int main(void)
{

    int a,b,c; 
    printf("Enter the three numbers: ") ;
    scanf("%d %d %d",&a,&b,&c) ;
    printf("Before swaping the numbers:\na=%d b=%d c=%d\n",a,b,c) ;
    swap(&a,&b) ;
    swap(&a,&c) ;
    printf("After swaping the numbers:\na=%d b=%d c=%d\n",a,b,c) ;
    return 0 ;
}