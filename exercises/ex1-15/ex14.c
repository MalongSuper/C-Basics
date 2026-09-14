// Create a copy of an array
#include <stdio.h>
#include <stdlib.h>

int *copyarray(int *array, int length)
{
    int *c = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
        c[i] = array[i];

    return c;
}

int main(void)
{
    int n;

    // Get the size of the array
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Declare an array of size n
    int myarray[n];

    // Iterate n times to enter the element the array
    printf("Enter %d numbers separated by spaces or newlines:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myarray[i]);
    }

    // Printing the array
    printf("\nYour array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    int *arraycopy = copyarray(myarray, n);

    for (int i = 0; i < n; i++)
    {
        printf("Copy[%d]=%d\n", i, arraycopy[i]);
    }

    return 0;

}
