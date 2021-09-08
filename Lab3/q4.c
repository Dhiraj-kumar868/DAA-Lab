/*Let A be an array of n integers a0,a1,... ,an-1 (negative integers are allowed), denoted, by
A[i... j], the sub-array ai, ai+1,... ,aj for i≤j. Also let Si-j denote the sum ai + ai+1 +· · · + aj. 
Write a programby using an udf that must run in O(n2) time to find out the maximum
value of Si-j for all the pair i, j with 0 ≤ i ≤ j ≤ n-1. Call this maximum value S. Also
obtains the maximum of these computed sums. Let j < i in the notation A[i... j] is also
allowed. In this case, A[i... j] denotes the empty sub-array (that is, a sub-array that ends
before it starts) with sum Si-j = 0. Indeed, if all the elements of A are negative, then one
returns 0 as the maximum sub-array sum.
a. For example, for the array A[]={1, 3, 7, 2, 1, 5, 1, 2, 4, 6, 3}.
b. This maximum sum is S = S3-8 = 2+( 1)+5+( 1)+( 2)+4 = 7*/

#include<stdio.h>
#define MIN -9999
void maxSubarraySum(int a[],int n){
    int max=MIN,sum=0,i,j;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum=sum+a[j];
            if(sum>max){
                max=sum;
            }
        }
    }
    printf("\nThe max sum of a subArray is : %d\n",max);
}
int main(){
    int a[50],n;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter the elements one by one:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("\nArray is : \n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    maxSubarraySum(a,n);
    return 0;
}