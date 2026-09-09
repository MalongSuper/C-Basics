// Create prime numbers Sequence
# include <stdio.h>
# include <math.h>

int is_prime(int n) {
    // Check if the current number is prime
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;  // Not a prime number
    }
    return 1;
}

void display_prime(int n) {
    int count = 2;
    for (int i = 1; i <= n; i++)
    {
        while (is_prime(count) == 0) // Not prime
        {
            count++;  // Add count
        }
        printf("%4d", count++);  // Print the number
    }
    printf("\n");
}


int main(void) {
    int N;
    printf("Prime Numbers Sequence");
    // Input N
    printf("\nEnter N: "); scanf("%d", &N);
    display_prime(N);
    return 0;
}
