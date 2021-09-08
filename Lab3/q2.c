/*Let A be a list of n (not necessarily distinct) integers. Write a program by using User
Defined Function(UDF)s to test whether any item occurs more than ⌈ n/2⌈ times in A.
a) UDF should take O(n2) time and use no additional space.
b) UDF should take O(n) time and use O(1) additional space.*/


#include<stdio.h>
//Time->O(n^2)
//Space->O(1)
int Majority(int A[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i] == A[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
        return A[index];
    return -1;
}
//Time->O(n)
//Space->O(1)
int MajorityElement(int A[], int n)
{
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            candidate = A[i];
        if (A[i] == candidate)
            count++;
        else
            count--;
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == candidate)
            c++;
    }
    if (c > n / 2)
        return candidate;
    else
        return -1;
}
int main()
{
    int length, sum;
    printf("Enter the size of an array:");
    scanf("%d",&length);
    int A[length];
    printf("Enter the elements:");
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The Array is:");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nMajority Element with O(n2) time and no additional space is :%d", Majority(A, length));
    printf("\nMajority Element with  O(n) time and O(1) additional space is :%d", MajorityElement(A, length));
    return 0;
}