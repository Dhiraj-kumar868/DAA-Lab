/*Rewrite the program no-2.3 (Insertion Sort) with the following details.
i. Compare the best case, worst case and average case time complexity with the same
data except time complexity will count the CPU clock time.
ii. Plot a graph showing the above comparison (n, the input data Vs. CPU times for
best, worst & average case)
iii. Compare manually program no-2.1 graph vs program no-3.1 graph and draw your
inference.*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
void sort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && key > array[j])
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
void display(int n, double c1, double c2, double c3)
{
    printf("\n\n");
    printf("Best Case : %lf", c2);
    printf("\n");
    printf("Average Case : %lf", c1);
    printf("\n");
    printf("Worst Case : %lf", c3);
    printf("\n\n");
}
int main()
{
    clock_t start_t, end_t;
    double total_t1, total_t2, total_t3;
    int k = 1, ch, n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int a[n];
    do
    {
        printf("\nEnter\n0-Exit.\n");
        printf("1-Generate n Random numbers=>Array\n");
        printf("2-Display the Array\n");
        printf("3-Sort the Array in Ascending Order by using Insertion Sort Algorithm\n");
        printf("4-Sort the Array in Descending Order by using any sorting algorithm\n");
        printf("5-Time Complexity to sort ascending of random data\n");
        printf("6-Time Complexity to sort ascending of data already sorted in ascending order\n");
        printf("7-Time Complexity to sort ascending of data already sorted in descending order\n");
        printf("8-Comparing Best case,Average case and worst case: \n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            for (i = 0; i < n; i++)
            {
                a[i] = rand()%n;
            }
            printf("Elements stored Successfully.\n");
            break;
        case 2:
            printf("Displaying Array: ");
            for (i = 0; i < n; i++)
            {
                printf(" %d ", a[i]);
            }
            printf("\n");
            break;
        case 3:
            insertionSort(a, n);
            printf("Elements are sorted Successfully in ascending order.");
            printf("\n");
            break;
        case 4:
            sort(a, n);
            printf("Elements are sorted Successfully in descending order.");
            printf("\n");
            break;
        case 5:
            start_t = clock();
            insertionSort(a, n);
            end_t = clock();
            total_t1 = (double)(end_t - start_t) / (double)CLOCKS_PER_SEC;
            printf("Time Complexity to sort ascending of random data is %lf", total_t1);
            printf("\n");
            break;
        case 6:
            start_t = clock();
            insertionSort(a, n);
            end_t = clock();
            total_t2 = (double)(end_t - start_t) / (double)CLOCKS_PER_SEC;
            printf("Time Complexity to sort ascending of data already sorted in ascending order is %lf", total_t2);
            printf("\n");
            break;
        case 7:
            start_t = clock();
            insertionSort(a, n);
            end_t = clock();
            total_t3 = (double)(end_t - start_t) / (double)CLOCKS_PER_SEC;
            printf("Time Complexity to sort ascending of data already sorted in descending order is %lf", total_t3);
            printf("\n");
            break;
        case 8:
            printf("Comparing Best case,Average case and worst case: \n");
            display(n, total_t1, total_t2, total_t3);
            break;
        default:
            printf("Wrong Choice..!!");
            printf("\n");
        }
    } while (ch);
}
