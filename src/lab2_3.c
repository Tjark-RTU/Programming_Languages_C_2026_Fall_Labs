#include <stdio.h>
#include <math.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    
    int sqrtN = sqrt(n);

    for(int i = 2; i <= sqrtN; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);
    if(n < 2)
    {
        printf("Error: please enter a number larger than or equal to 2\n");
    }

    printf("All prime numbers up to and including: %d\n", n);
    for(int i = 2; i <= n; i++)
    {
        
        if(is_prime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
