/*Write a program to store random numbers into an array of n integers, where the array
must contains some duplicates. Do the following:
a) Find out the total number of duplicate elements.
b) Find out the most repeating element in the array.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, max = 0, number_of_repeationg_elements = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    int range = n - 3;
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % range;
    }
    printf("The array is : \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    int count[n - 3];
    for (i = 0; i < n - 3; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (i = 0; i < n - 3; i++)
        printf("%d=>%d ", i, count[i]);
    printf("\n");
    for (i = 0; i < n - 3; i++)
    {
        if (count[i] > 1)
            number_of_repeationg_elements += count[i];
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    printf("The number of repeating elements: %d", number_of_repeationg_elements);
    printf("\n");
    printf("The most repeating element:\n");
    for (i = 0; i < n - 3; i++)
    {
        if (count[i] == max)
        {
            printf("%d\n", i);
        }
    }
}