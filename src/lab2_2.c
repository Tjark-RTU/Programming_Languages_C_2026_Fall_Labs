#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long factorial(int n) {
    long result = 1;
    for(int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Please input a positive number that is larger than or equal to 0\n");
    }
    else
    {
        printf("Factorial %d is %lu", n, factorial(n));
    }

    return 0;
}
