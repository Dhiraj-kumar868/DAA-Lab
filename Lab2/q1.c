/*Write a program to test whether a number n, entered through keyboard is prime or
not by using different algorithms you know for atleast 10 inputs and note down the time
complexity by step/frequency count method for each algorithm & for each input.*/


#include <stdio.h>
int count1 = 0, count2 = 0, count3 = 0;
int isprime1(int n)
{
    int c = 0;
    count1++;
    count1++;
    for (int i = 1; i <= n; i++)
    {
        count1++;
        count1++;
        if (n % i == 0)
        {
            count1++;
            c++;
        }
    }
    count1++;
    if (c == 2)
    {
        count1++;
        return 1;
    }
    else
    {
        count1++;
        count1++;
        return 0;
    }
}
int isprime2(int n)
{
    int c = 0;
    count2++;
    count2++;
    for (int i = 2; i <= n - 1; i++)
    {
        count2++;
        count2++;
        if (n % i == 0)
        {
            count2++;
            c++;
        }
    }
    count2++;
    if (c == 0)
    {
        count2++;
        return 1;
    }
    else
    {
        count2++;
        count2++;
        return 0;
    }
}
int isprime3(int n)
{
    int c = 0;
    count3++;
    count3++;
    for (int i = 2; i <= n / 2; i++)
    {
        count3++;
        count3++;
        if (n % i == 0)
        {
            count3++;
            c++;
            count3++;
            break;
        }
    }
     count3++;
    if (c == 0)
    {
        count3++;
        return 1;
    }
    else
    {
        count3++;
        count3++;
        return 0;
    }
}
int main()
{
    int num, result1, result2, result3;
    printf("Enter the number:");
    scanf("%d", &num);
    result1 = isprime1(num);
    result2 = isprime2(num);
    result3 = isprime3(num);
    printf("Time complexity of algorithm 1:%d ", count1);
    printf("\nTime complexity of algorithm 2:%d ", count2);
    printf("\nTime complexity of algorithm 3:%d ", count3);
    if (result1 == 1)
    {
        printf("\nPrime Number using algo 1.");
    }
    else
    {
        printf("\nNot Prime Number using algo 1.");
    }
    if (result2 == 1)
    {
        printf("\nPrime Number using algo 2.");
    }
    else
    {
        printf("\nNot Prime Number using algo 2.");
    }
    if (result3 == 1)
    {
        printf("\nPrime Number using algo 3.");
    }
    else
    {
        printf("\nNot Prime Number using algo 3.");
    }
    return 0;
}