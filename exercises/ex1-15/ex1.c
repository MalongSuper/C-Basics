// Find the Minimum Number in an Array
#include <stdio.h>

int find_min(int array[], int length)
{
    int min;
    min = array[0];

    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
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

    int min = find_min(myarray, n);
    printf("Minimum: %d\n", min);

    return 0;

}