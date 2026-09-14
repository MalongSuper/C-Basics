// Sum the Values in an Array
#include <stdio.h>

int sum(int array[], int length)
{
    int sumvalue = 0;
    for (int i = 0; i < length; i++)
        sumvalue = sumvalue + array[i];
    return sumvalue;
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

    // Calculate the sum
    printf("Sum: %d\n", sum(myarray, n));

    return 0;
}
