// Dice roll simulator
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int dice)
{
    for (int i = 1; i <= dice; i++)
    {
        printf("Dice %d: %d\n", i, rand() % 6 + 1);
    }
    return 0;
}


int main(void)
{
    int n;

    printf("Enter the number of rolls (n): ");
    scanf("%d", &n);

    roll(n);
}
