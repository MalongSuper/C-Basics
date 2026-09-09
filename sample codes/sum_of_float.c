// Compute all float numbers
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void) {
    int N;
    float number, S = 0;
    printf("Sum of float numbers\n");
    // Input N
    printf("Enter N: ");
    scanf("%d", &N);
    srand(time(NULL));
    for (int i = 1; i <= N; i ++)
    {
        // Generate sequence with random float numbers from 1 to 50
        number = (rand() % 51) * 0.1;
        printf("%.3f\t", number);
        S += number;
        
    }
    printf("\n=> S = %.2f\n", S);
    return 0;
}
