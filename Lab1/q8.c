/*Write a program to display an array of n integers (n>1), where at every index of the
array should contain the product of all elements in the array except the element at the
given index. Solve this problem by taking single loop and without an additional array.
Input Array : 3 4 5 1 2
Output Array :40 30 24 120 60*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, mul = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers one by one:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before multiplication : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        mul *= a[i];
    }
    for (i = 0; i < n; i++)
    {
        a[i] = mul * pow(a[i], -1);
    }
    printf("\nAfter multiplication : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}