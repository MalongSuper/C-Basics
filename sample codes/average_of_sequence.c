// Average of sequence
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void) {
    int N, number;
    float S = 0;
    float A = 0;
    printf("Average of sequence\n");
    // Input N
    printf("Enter N: ");
    scanf("%d", &N);
    srand(time(NULL));
    for (int i = 1; i <= N; i++)
    {
        // Generate sequence with random numbers from -50 to 50
        number = rand() % 101 - 50;
        printf("%4d", number);
        S += number;
    }
    A = S / N;
    printf("\n=> A = %.2f\n", A);
}