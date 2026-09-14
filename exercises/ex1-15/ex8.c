// Convert Celsius to Fahrenheit 
// Multiply by 1.8 and add 32
#include <stdio.h>

double farenheit(double C)
{
    return (C * 1.8) + 32;
}


int main(void)
{
    double C = 0;
    double start = 0;
    double end = 0;
    double step = 0;
    double F = 0;

    // Input start, end C, and step value
    printf("Enter start C: ");
    scanf("%lf", &start);

    printf("Enter end C: ");
    scanf("%lf", &end);

    printf("Enter step value: ");
    scanf("%lf", &step);

    // Iterate
    for (C = start; C <= end; C += step)
        {
            F = farenheit(C);
            printf("%8.2lf %8.2lf\n", C, F);
        }

}
