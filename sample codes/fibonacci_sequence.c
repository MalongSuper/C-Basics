// Create Fibonacci Sequence
# include <stdio.h>

// Fibonacci function
void Fibonacci(int N) {
    int F1 = 1, F2 = 1, F;  // Initialize F(1), F(2), F
    for (int i = 1; i <= N; i++)
    {
        if (i <= 2)  // If i is lower than 2, returns 1
            F = 1;
        else
        {
            F = F1 + F2; // Example: Loop 1 => 2 = 1 + 1
            F1 = F2; F2 = F; // 1 = 1; 2 = 2 (F1 = 1; F2 = 2), begin loop 2
        }
        printf("%4d\t", F);
        
    }
    printf("\n");
}


int main(void) {
    int N;
    printf("Fibonacci Sequence\n");
    // Input N
    printf("Enter N: ");
    scanf("%d", &N);
    Fibonacci(N);
    return 0;
}
