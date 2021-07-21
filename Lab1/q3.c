/*Write a program to rearrange the elements of an array of n integers such that all even
numbers are followed by all odd numbers. How many different ways you can solve this
problem. Write your approaches & strategy for solving this problem.*/

#include <stdio.h>
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
int main()
{
    int n, i;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int lp = 0, rp = n - 1;
    while (lp < rp)
    {
        if (a[lp] % 2 == 0)
        {
            while ((a[rp] % 2 == 0) && rp > lp)
            {
                rp--;
            }
            swap(&a[lp], &a[rp]);
        }
        lp++;
    }
    printf("Final Arranged array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}