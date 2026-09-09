//  Sum of sequence
# include <stdio.h>
# include <stdlib.h>

int main(void) {
    int N, S = 0, number;
    printf("Sum of sequence\n");
    // Input N
    printf("Enter N: ");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++)
    {
        // Generate sequence with random numbers from 1 to 50
        number = rand() % 51;
        printf("%3d", number);
        S += number;
    }
    printf("\n=> S = %d\n", S);
    return 0;
}


