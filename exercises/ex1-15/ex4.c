// Reverse An Array

//
// Algorithm:
// - Start with the first element (i = 0) and the last element (length - 1).
// - Swap these two elements.
// - Move toward the center by increasing i and decreasing the right index.
// - Continue until the two sides meet.
//
// Only half of the array needs to be processed because each swap
// places two elements in their final positions.

#include <stdio.h>


void reverse(int array[], int length)
{
    int temp = 0;

    for (int i = 0; i < (length / 2); i++)
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }

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

    // Perform reversing
    reverse(myarray, n);

    for (int i = 0; i < n; i++)
        printf("myarray[%d] = %d\n", i, myarray[i]);
    
    printf("\n");

}