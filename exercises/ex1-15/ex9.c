// Computing the Fibonacci Sequence
// Sequence: 0, 1, 1, 2, 3, 5, 8, 13
#include <stdio.h>

int fib(int n)
{
    if (n > 1) 
    return fib(n - 1) + fib(n - 2);

    else if (n == 1) return 1;
    else if (n == 0) return 0;
    else
    {
        printf("Error: n must be >= 0");
        return -1;
    }
}


int main(void)
{
    int n;
    
    printf("Enter the length of the sequence (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d", fib(i));

        if (i != (n - 1)) printf(", ");
        else printf("\n");
    }

}
