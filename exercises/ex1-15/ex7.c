// Compute the Average of an Array
#include <stdio.h>

double avg(double array[], int length)
{
    double sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    return (sum / length);
}


int main(void)
{
    int n;

    // Get the size of the array
    // Use %lf for double
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Declare an array of size n
    double myarray[n];

    // Iterate n times to enter the element the array
    printf("Enter %d numbers separated by spaces or newlines:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &myarray[i]);
    }

    // Printing the array
    printf("\nYour array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%lf ", myarray[i]);
    }
    printf("\n");

    printf("Average: %lf\n", avg(myarray, n));

    return 0;

}