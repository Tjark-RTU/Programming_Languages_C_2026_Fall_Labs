#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {

    int result = 0;
    for(int i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    if(n < 1)
    {
        printf("Error: please input a positive number that is greater or equal to 1\n");
    }
    else
    {
        printf("Sum of all positive numbers up to and including %d:  %d\n",n,sum_to_n(n));

    }

    return 0;
}
