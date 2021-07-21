/*Let A be n*n square matrix array. WAP by using appropriate
 user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/

#include <stdio.h>
#include <stdlib.h>

void number_of_nonzero(int n, int a[][n])
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                count++;
            }
        }
    }
    printf("The number of non-zero elements  : %d", count);
}
void sum_above_leading_diagonal(int n, int a[][n])
{
    int i = 0, j = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum += a[i][j];
            }
        }
    }
    printf("The sum of elements above the leading diagonal :  %d\n", sum);
}
void display_lower_matrix(int n, int a[][n])
{
    int i, j;
    printf("Displaying the elements below the minor diagonal:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j < i)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
}
void display_product(int n, int a[][n])
{
    int i, j, product = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                product *= a[i][j];
            }
        }
    }
    printf("The product of the diagonal elements : %d", product);
}
int main()
{
    int n;
    printf("Enter the size of square matrix:");
    scanf("%d", &n);
    int a[n][n];
    int i, j;
    printf("Enter the %d elements one by one: ",n*n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The entered matrix is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    number_of_nonzero(n, a);
    printf("\n");
    sum_above_leading_diagonal(n, a);
    printf("\n");
    display_lower_matrix(n, a);
    printf("\n");
    display_product(n, a);
    printf("\n");
}
