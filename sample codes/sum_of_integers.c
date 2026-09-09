// Compute all integers
# include <stdio.h>

int main(void) {
    int N, S = 0;
    printf("Sum all integers\n");
    do {
        printf("Enter an integer (0 to exit): ");
        scanf("%d", &N);
        S += N;
    }
    while (N > 0);
    printf("Sum = %d\n", S);
    return 0;
}

