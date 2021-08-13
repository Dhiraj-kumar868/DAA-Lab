/*Write a program to find out GCD (greatest common divisor) using the following three
algorithms.
a) Euclid’s algorithm
b) Consecutive integer checking algorithm.
c) Middle school procedure which makes use of common prime factors. For finding
list of primes implement sieve of Eratosthenes algorithm.
Write a program to find out which algorithm is faster for the following data. Estimate
how many times it will be faster than the other two by step/frequency count method.*/


#include <stdio.h>
static int count1 = 0, count2 = 0, count3 = 0;
int GcdEuclid(int a, int b)
{
    if (a <= 0 || b <= 0)
    {
        count1++;
        return 0;
    }
    if (a == b)
    {
        count1++;
        return a;
    }
    if (a > b)
    {
        if (a % b == 0)
        {
            count1++;
            return b;
        }
        count1++;
        GcdEuclid(a % b, b);
    }
    else
    {
        if (b % a == 0)
        {
            count1++;
            return a;
        }
        count1++;
        GcdEuclid(a, b % a);
    }
}
int GcdMidSchAlgo(int a, int b)
{
    int i, c, ans = 1, m, n, k;
    count2++;
    c = a >= b ? b : a;
    count2++;
    count2++;
    for (i = 2; i <= c; i++)
    {
        count2++;
        n = 0;
        count2++;
        count2++;
        m = 0;
        if (a % i == 0)
        {
            count2++;
            m = 1;
            count2++;
            a = a / i;
        }
        if (b % i == 0)
        {
            count2++;
            n = 1;
            count2++;
            b = b / i;
        }
        if (m == 1 && n == 1)
        {
            count2++;
            ans = ans * i;
        }
        if (m == 1 || n == 1)
        {
            count2++;
            i--;
        }
    }
    count2++;
    return ans;
}
int GcdConIntChecMet(int a, int b)
{
    int i, c;
    count3++;
    c = a >= b ? b : a;
    count3++;
    count3++;
    for (i = c; i >= 1; i--)
    {
        count3++;
        if (a % i == 0 && b % i == 0)
        {
            count3++;
            return i;
            count3++;
            break;
        }
    }
}
int main()
{
    int a, b, result1, result2, result3;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    result1 = GcdEuclid(a, b);
    printf("\nGCD of two number using Euclid's Method: %d", result1);
    printf("\nTime Complexity using Euclid's Method: %d", count1);
    result2 = GcdMidSchAlgo(a, b);
    printf("\n\nGCD of two number using Middle school procedure: %d", result2);
    printf("\nTime Complexity using Middle school procedure: %d", count2);
    result3 = GcdConIntChecMet(a, b);
    printf("\n\nGCD of two number using Consecutive integer checking algorithm.: %d", result3);
    printf("\nTime Complexity using Consecutive integer checking algorithm.: %d", count3);
    return 0;
}