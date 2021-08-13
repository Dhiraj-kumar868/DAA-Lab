/*Write a menu driven program as given below, to sort an array of n integers in ascending
order by insertion sort algorithm and determine the time required (in terms of
step/frequency count) to sort the elements. Repeat the experiment for different values of
n and different nature of data (i.e.apply insertion sort algorithm on the data of array
that are already sorted, reversely sorted and random data). Finally plot a graph of the
time taken versus n for each type of data. The elements can be read from a file or can be
generated using the random number generator.*/

#include <stdio.h>
#include <stdlib.h>
long int count;
void insertionSort(int array[], int n)
{
    count=0;
    count++;
    for (int i = 1; i < n; i++)
    {
        count++;
        int key = array[i];
        count++;
        int j = i - 1;
        count++;
        while (j >= 0 && key < array[j])
        {
            count++;
            count++;
            array[j + 1] = array[j];
            count++;
            --j;
        }
        count++;
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
 
void display(int n,long int c1,long int c2,long int c3){
    printf("\n\n");
    printf("SI. No. Value of n  T(n)(Random Data) T(n)(Data in ascen.) T(n)(Data in Desc.)");
    printf("\n");
    printf(" 1\t%d\t\t%d\t\t%d\t\t%d",n,c1,c2,c3);
    printf("\n\n");
}
int main()
{
    int k = 1, ch, n, i;
    long int c1,c2,c3;
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
        printf("8-Displaying Table Below: \n");
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
                a[i]=rand()%100;
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
            insertionSort(a,n);
            printf("Elements are sorted Successfully in ascending order.");
            printf("\n");
            break;
        case 4:
            sort(a,n);
            printf("Elements are sorted Successfully in descending order.");
            printf("\n");
            break;
        case 5:
            insertionSort(a,n);
            c1=count;
            printf("Time Complexity to sort ascending of random data is %d",count);
            printf("\n");
            break;
        case 6:
            insertionSort(a,n);
            c2=count;
            printf("Time Complexity to sort ascending of data already sorted in ascending order is %d",count);
            printf("\n");
            break;
        case 7:
            insertionSort(a,n);
            c3=count;
            printf("Time Complexity to sort ascending of data already sorted in descending order is %d",count);
            printf("\n");
            break;
        case 8:
             printf("Displaying Table Below: \n");
             display(n,c1,c2,c3);
            break;
        default:
            printf("Wrong Choice..!!");
            printf("\n");
        }
    } while (ch);
}
