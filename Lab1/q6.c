/*Write a program to find out the second smallest and second largest element stored in an
array of n integers. n is the user input. The array takes input through random number
generation within a given range. How many different ways you can solve this problem.
Write your approaches & strategy for solving this problem.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int i, j, temp, n;
    printf("Enter a number:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Displaying the numbers in descending order : ");

    for (i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }

    printf("\nThe 2nd largest number is  = %d\n", a[1]);
    printf("The 2nd smallest number is = %d\n", a[n - 2]);
    return 0;
}